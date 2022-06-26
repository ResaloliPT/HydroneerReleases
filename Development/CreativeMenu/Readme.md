
# Context

Whenever im refering to any of those, relate to your own mod.

Context table:
- Example Mod name: TestMod
- Example Hook Name: BP_TestMod
- Example mod folder: Content\Mods\TestMod
- Example item using custom settings: BetterRake
- Example DataAsset: DA_BetterRakeSpawnerSettings
- Example Settings Widget: UI_BetterRakeSpawnSettings
- Example properties used to spawn item: CoolText
- Example event for spawning items: OnCustomItemSpawn

# Steps

## Create a DataAsset
Starting with a new/existing mod start by creating a new folder on the mod folder called "DataAssets".

Inside this new folder create a new DataAsset by right click on context menu -> Miscellaneous -> Data Asset.

[insert here a SS of that context menu with that option hightlighted]

On the dialog that poped up search for "CustomSettings", the search resulte "BP_CustomSettings" shows up, select that one

In my case i will want to use custom settings for my BetterRake (im using a single item, but it suports a array of items), so i will name my settings "DA_BetterRakeSpawnerSettings" (Name is not important, but im following the pattern "DA_[something]SpawnerSettings")
[insert here ss of created asset 1]


Open that newly created DataAsset and the only value that can be statically set is the Widget (refer to the create a widget step)
[insert here ss of the widget selecting 2]

## Create a Widget
Create a new widget (I'll call it UI_BetterRakeSpawnSettings) with desired size and as a a child add a Size Box and set the Width Override to 740
[insert here ss of setting this setting, and a border around the tree on the hierarchy view 3]

insert a canvas and draw the desired UI

Note: make sure the desired properties used to spawn the item are public, in my case: CoolText with type of string, set by using a textbox on the UI

## Hook the DataAsset

### Register Custom Settings

On the mod hook create a variable of type BP_CustomSettings array, with static values of your custom settings (DA_BetterRakeSpawnerSettings in this example)
[insert here ss of the variable with default values with the DataAssets 4]

Still on the hook, on the event for "Mods Loaded" on the WorkshopMods stage, for each setting (aka, for each loop/loop/current setting on loop), if setting equals DA_BetterRakeSpawnerSettings then bind event to "On Pre Spawn" of the target linking to the current element of the loop, the value of the event, can be a event node or the "Create Event" node (for sake of this example, im using "Create Event") on the create Event node, select "Create a matching event", a new red node will show up and ill call it: OnCustomItemSpawn.

[insert here a ss of the Create event node with selected element 5]

After the "Bind event to On Pre Spawn" node, set the variable Items of the current settings of the loop, from the items get a "Make Array" node, and split the struct pin,
get the value of "Item Class" and "Tags", from your existing item list using a "Get (a copy)" node, use the hardcoded index of that item related to that current setting.

[insert here a ss of the item list with a box around the default value of the related item and the get node, with a arrow pointing to the index of the list 6]

Finally after the Set node for the items, call the "Register Custom Settings" node (thats a global function), abd link the "Custom Settings" pin to the current setting on the array.

Should be something like this.
[insert ss of the full event]

Note: when adding more settings expand from the false pin on the branch created after the for each loop and cascade from there.

### Spawn Logic

From the created red node (OnCustomItemSpawn, aka event), cast the widget to the concrete Settings Widget, if it casts, spawn actor, the custom settings can be collected from the casted widget (as explained before they should be public properties), after spawn, do whatver you might need to do for item init (usualy you dont need), and use the "Call On Spawn" node from the "Settings" pin on the event node, and pass the spawned actor from the Spawn actor node.

[insert here ss of the event]

Note: if needed to cascade more items, expand from the "Cast Failed" pin on the cast right after the event node