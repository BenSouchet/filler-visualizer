# Filler Visualizer

This visualizer is a program developed as an extension of a project for my learning course at 42 school (Paris).<br /><br />
The objective is to visualize the battle / conquest of territory of two AI on a specifique area.<br />
<img align="center" src="https://raw.githubusercontent.com/BenjaminSouchet/Filler_Visualizer/master/visualizer/assets/images/visualizer.gif?token=AQPLEJCwLAqHszv7J7Nw19XqIXDy0HGeks5Y4pZMwA%3D%3D" width="100%" height="544px" />
<br />
Several options are available (see [Keyboard shortcuts](https://github.com/BenjaminSouchet/Filler_Visualizer#keyboard-shortcuts) section for more infos) :
* Play / Pause the progression of the battle
* Navigation between steps
* Change colors of the two AI
* Progression Bar
* Time elapsed

## Install & launch

### Install it easily

```bash
git clone https://github.com/BenjaminSouchet/Filler_Visualizer.git ~/Filler_Visualizer
cd ~/Filler_Visualizer
```

### Start a battle

```
./filler_vm -f maps/{MAP} -p1 players/{PLAYER1}.filler -p2 players/{PLAYER2}.filler -q -v
```
Variables :<br />
{MAP} : The map you want to use (located in folder 'maps')<br />
{PLAYER1} & {PLAYER2} : The players (players are located in folder 'players')<br /><br />
Example :<br />
So, if you want to start a battle between hcao & carli on the map01 ⇣

```bash
./filler_vm -f maps/map01 -p1 ./players/hcao.filler -p2 players/carli.filler -q -v
```

## Keyboard shortcuts

<table width="100%">
<thead>
<tr>
<td width="65%" height="60px" align="center" cellpadding="0">
<strong>Description</strong>
</td>
<td width="10%" align="center" cellpadding="0">
<span style="width:70px">&nbsp;</span><strong>Key(s)</strong><span style="width:50px">&nbsp;</span>
</td>
</tr>
</thead>
<tbody>
<tr>
<td valign="top" height="30px">Close the program (aka quit/exit)</td>
<td valign="top" align="center"><kbd>&nbsp;esc&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Play / Pause the battle</td>
<td valign="top" align="center"><kbd>&nbsp;return&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Change colors of the AI</td>
<td valign="top" align="center"><kbd>&nbsp;shift&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">View the previous step of the battle</td>
<td valign="top" align="center"><kbd>&nbsp;◄&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">View the next step of the battle</td>
<td valign="top" align="center"><kbd>&nbsp;►&nbsp;</kbd></td>
</tr>
</tbody>
</table>

## Contact or contribute

If you want to contact me, or fix / improve this project, just send me a mail at **bsouchet@student.42.fr**
