[Variables]
Pk.MnIm=#ROOTCONFIGPATH#Package\#Sl.Pk#\@\Image\Main.png
Pk.Info=Use the style of Quanto Flx to display shortcuts.
Pk.Vrsn=2.00 Beta
Pk.VBld=1011
Pk.Athr=Steve Hsu
Pk.SpTo=2.00 Beta
Pk.SpVB=1011
Pk.Wbst.Hd=0
Pk.Wbst=https://github.com/stevehsudrawing/quantoflx

Sl.Tt=#Tm.Quanto_Flx_Shortcuts#
Sl.SuTt.0=#Tm.Default#
Sl.SuTt.1=#Tm.Customization#
Sl.SuTt.2=#Tm.Shortcut_Group_Drawers#
Sl.SuTt.3=#Tm.Settings#
Sl.SuTt.4=#Tm.Backup_and_Restore#
Sl.SuTt.5=#Tm.About#
Sl.SuTt.6=
Sl.SuTt.7=
Sl.SuTt.8=
Sl.SuTt.9=

;============ Settings of "Restoring from an older version of backup" Feature ============

; Do users be allowed to "restore from an older version of backup"?
;   0 - No
;   1 - Yes
Rs.AlowRstr=0

; Do you need to exclude files or folders when restoring?
;   0 - No
;   1 - Yes
Rs.ExclNeed=0

; Make a list of folders or files that need to be excluded.
;   Format:  "FileName1"(+"FileName2")(+"FileName3")... (NO SPACE)
;   Example: "Skin1.inc"+"Skin2.inc"
;   Same as "/exclude" parameter of XCOPY command in Windows Command Prompt. Details:
;   https://docs.microsoft.com/en-us/windows-server/administration/windows-commands/xcopy
; If you don't need it, leave it blank.
Rs.ExclFile=

; Describe why these folders or files are excluded.
;   Example: They are not compatible with the new version
; If you don't need it, leave it blank.
Rs.ExclRasn=