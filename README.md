# Filler Visualizer

Wolf3D is a program developed for my learning course at 42 school.<br/>
This visualizer is a program developed as an extension of a project for my learning course at 42 school (Paris).<br/>
The objective is to visualize the battle / conquest of territory of two AI on a specifique area.<br/>
I realize all this in pure C, with the SDL2 Graphic Library.<br/><br/>
<img align="center" src="http://i.cubeupload.com/0Zy3iS.gif" width="100%" />
Several options are available (see [Keyboard shortcuts](https://github.com/BenjaminSouchet/Filler_Visualizer#keyboard-shortcuts) section for more infos) :
* Move in any directions (sideways movements included)
* Rotation with keys (or mouse position)
* Textured Mode (with floor and ceil casting)
* Walls collision (with an slight realistic offset)
* Minimap with rotation according to the player rotation
* Fire Torch Lighting simulation (in Normal & Hardcore Mode only)
* Several songs (with Selection of track / Play / Pause and Stop options)
* Hardcore Mode & Easy Mode
* Ambient occlusion

## Install & launch

### Install it easily

```bash
git clone https://github.com/BenjaminSouchet/Filler_Visualizer.git ~/Filler_Visualizer
cd ~/Filler_Visualizer
```
### Start a battle

You have to launch the program with a parameter. This is the name of the map you would like open at the execution of the program. This parameter as to be the name of a valid map, below the list of available maps :<br />
*maps/good/Basic_00.w3d*<br />
*maps/good/Basic_01.w3d*<br />
*maps/good/Maze_Small.w3d*<br />
*maps/good/Maze_Medium.w3d*<br />
*maps/good/Maze_Large.w3d*<br />

Example :

Open one maze map ⇣
```bash
./wolf3d maps/good/Maze_Large.w3d
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
