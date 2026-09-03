
# LiD_Tool | LET IT DIE Toolkit

> This here's the tool, I generated the commands down below with Gemini just copy pasting the stuff from the "Help" command. Only part of the project that uses AI, none of the code does! :)
> 
> It's a bit of a Goliath of a project, it was never intended for public release and largely a testing/learning grounds for me since starting the Dev in November 2021.
>
> The tool is compile ready, the offsets are located in LiD_Tool\LID\GameDefines.hpp along with patterns in case the game ever updates again. Cheers.

## Story

> I've always loved this game since it's initial release on PS4 but admitidly, I was absolute dog shit at it.
> Imagine my surprise when I finally remember it had a PC release while having some downtime.
> This has largely been a labor of love, I've been banned making this thing multiple times.
> 
> I once put 300+ hours into an account in a single month with it, made it all the way to the top floor; mad farming materials using the CleanFloor and PickItem commands to see what's there; I had R&D maxed on the "meta" items at the time in that little frame of time as well as most Jackal equips.
> 
> This account was caught whilst I was developing the Decal system, I was mid run testing stuff stupidly and flagged myself at the end of a floor. Anyone whose cheated before knows that means basically instant death. They used to manually review each of these flags and place a ban about a week later so you wouldn't know what caused it.
> 
> Hurt, took a spot of a break, but feeling undefeated I came back and finished the work. It took reversing the client in IDA to find the proper functions that were resetting the Decals, that way I can actually control the values.
> 
> I think that's the crowning jewel here, you can control basically any parameter you wish with the Decal system. It's quite charming. I imagine now that the game is offline; the KC multipliers and the like will work now too.
> 
> So there you have it, I hope other people can enjoy this as much as I have and/or contribute.
>
> P.S. I always planned a rewrite for this so it's not stuck in my shitty 2021 style of code but never got around to it. The project is just too massive.
> 
> Much love, Ant.


---

## Features

- **Entity & Hater Management** — Teleport, banish, and manipulate Hater/Screamer spawns.
- **Player & Stat Modifiers** — Adjust attributes (STR, DEX, VIT), movement speeds, and durability/ammo states.
- **Map & Teleportation** — Instant warp to treasures, escalators, elevators, or custom saved coordinates.
- **Automation & Farming** — Loopable floor farming utilities and automated loot aggregation.

---

## Command Reference

### System & Debug
| Command | Description |
| :--- | :--- |
| `pInfo` | Prints various information about LET IT DIE. *Testing Grounds && Also Instant Completes Quests* |
| `zUNLOAD` | Attempts to stop this thread and unload the cheat. |
| `DBG_TestHook` | Attempts to hook ProcessEvent finally... for a specific packet. |
| `pItem` | Prints various information about one's inventory... *!!MESSES WITH VALUES!!* |
| `Refresh` | Refreshes the active player list. |
| `tDbg` | Attempts to give oneself Debug Menu access. |
| `tPLog` | Toggles the Player Event Log. |
| `tALog` | Toggles the Action Play Log. |
| `tInfo` | Toggles optional Debug Info. |

### Enemy & Hater Control
| Command | Description |
| :--- | :--- |
| `ccHaters` | Teleports haters to screamers. *[LOCATION]* |
| `vcScreamers` | Teleports screamers to player for farming. *[LOCATION]* |
| `vcCoins` | Teleports dropped coins to player. Useful with Screamers vac. *[LOCATION]* |
| `vcHaters` | Teleports HATERS to player. *[FLAGS \| LOCATION]* |
| `bbHaters` | Banishes haters. *[FLAGS \| LOCATION]* |
| `bbHaters_Loop` | *NOT WORKING* Spawns a thread that waits to banish haters on new floors. *[FLAGS \| LOCATION]* |
| `ComeBackBaby` | Moves HATERS to your location. FOR BOSSES. *[LOCATION]* |
| `ComeBackBaby_2` | Attempts to fix hater behavior. FOR BOSSES. *[FLAGS]* |
| `sHate` | Sets the Hate (Special Gauge) Gain Rate. |
| `tHate` | Toggles hater combat overrides. |
| `tbHate` | Ends the banishment of haters. |

### Jackal Mechanics
| Command | Description |
| :--- | :--- |
| `sJak` | Sets the Jackal spawn timer. |
| `sJNm` | Sets the Jackal spawn quantity. |
| `aJak` | Adds correct Jackal values to spawn, or clears them if loaded. |
| `tJak` | Toggles the spawning of Jackals. |

### Farming & Automation
| Command | Description |
| :--- | :--- |
| `TestRun` | Tests the first few iterations of the LiD F4RMB0T 20o0 XXL. |
| `CleanFloor` | Allows the player to leisurely collect the rest of the floor's treasures. |
| `FarmLoop` | Tests the actual looping of TestRun (needs work, missing level load bool). |
| `tbFarm` | Ends the skipping of grinding. |

### Teleportation, Movement & Map
| Command | Description |
| :--- | :--- |
| `sTreasure` | Prints floor treasure locations and allows warping to a chosen option. |
| `sPTreasure` | Prints floor treasure locations, warps, and attempts to pick up items. |
| `sLocation` | Sets current location. Use with care. |
| `sRotation` | Sets current rotation. Use with care. |
| `sEsca` | Warps to a chosen escalator on the map. |
| `sElva` | Warps to the map's elevator switch. *[IDX0]* |
| `incX` | Increases current X coordinate by input value. |
| `incY` | Increases current Y coordinate by input value. |
| `incZ` | Increases current Z coordinate by input value. |
| `LLoc` | Loads a location from saved list. |
| `SLoc` | Saves current location to list. |
| `CLoc` | Clears saved location list. |

### Player Stats & Toggles
| Command | Description |
| :--- | :--- |
| `sNormals` | Restores default player values. |
| `sWSP` | Sets character Walk Speed (LiD:OFFLINE only). |
| `sSSP` | Sets character Sprint Speed (LiD:OFFLINE only). |
| `sMSM` | Sets character Movement Speed Modifier (LiD:OFFLINE only). |
| `sStr` | Sets STR Adjustment Rate. |
| `sDex` | Sets DEX Adjustment Rate. |
| `sVit` | Sets VIT Adjustment Rate. |
| `sRTm` | Sets Revival Timer (Invincible and Undetected). |
| `sHP` | Sets current HP *(VISIBLE SERVER-SIDE IN MOST SITUATIONS)*. |
| `tDur` | Toggles No Durability Loss flag. |
| `tAmm` | Toggles No Ammo Consumption flag. |
| `tRst` | Toggles Attribute Resistance flag (Immune to Poison). |
| `tInv` | Toggles Invincibility Scene flag. |
| `tPick` | Toggles automatic pickup. |
| `tDecals` | Toggles custom decal bases. |
| `Kill` | Kills the entire floor with a single flag. |

---

## License

Distributed under the WTFPL License.
