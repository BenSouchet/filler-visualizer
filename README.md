# Filler Visualizer

This visualizer is a program developed as an extension of a project for my learning course at 42 school (Paris).<br /><br />
The objective is to visualize the battle / conquest of territory of two AI on a specifique area.<br />
<img align="center" src="http://i.cubeupload.com/0Zy3iS.gif" width="100%" height="544px" />
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
<td valign="top" height="30px">Reset all the changes made</td>
<td valign="top" align="center"><kbd>&nbsp;clear&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Hold to run faster</td>
<td valign="top" align="center"><kbd>&nbsp;shift&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Enable or disable the mouse controls</td>
<td valign="top" align="center"><kbd>&nbsp;M&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Make a step forward</td>
<td valign="top" align="center"><kbd>&nbsp;▲&nbsp;</kbd> or <kbd>&nbsp;W&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Make a step backward</td>
<td valign="top" align="center"><kbd>&nbsp;▼&nbsp;</kbd> or <kbd>&nbsp;S&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Make a step to the left</td>
<td valign="top" align="center"><kbd>&nbsp;A&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Make a step to the left</td>
<td valign="top" align="center"><kbd>&nbsp;D&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Rotate to the left</td>
<td valign="top" align="center"><kbd>&nbsp;◄&nbsp;</kbd> or <kbd>&nbsp;Q&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Rotate to the right</td>
<td valign="top" align="center"><kbd>&nbsp;►&nbsp;</kbd> or <kbd>&nbsp;E&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Hardcore Mode Switcher</td>
<td valign="top" align="center"><kbd>&nbsp;H&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Easy Mode Switcher</td>
<td valign="top" align="center"><kbd>&nbsp;Z&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Play / Pause the current song</td>
<td valign="top" align="center"><kbd>&nbsp;P&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Switch to the first song</td>
<td valign="top" align="center"><kbd>&nbsp;1&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Switch to the second song</td>
<td valign="top" align="center"><kbd>&nbsp;2&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Switch to the third song</td>
<td valign="top" align="center"><kbd>&nbsp;3&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Switch to the fourth song</td>
<td valign="top" align="center"><kbd>&nbsp;4&nbsp;</kbd></td>
</tr>
</tbody>
</table>

## Contact or contribute

If you want to contact me, or fix / improve this project, just send me a mail at **bsouchet@student.42.fr**
