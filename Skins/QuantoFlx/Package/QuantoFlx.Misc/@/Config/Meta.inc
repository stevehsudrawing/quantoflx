[Variables]
Pk.MnIm=#ROOTCONFIGPATH#Package\#Sl.Pk#\@\Image\Main.png
Pk.Info=Here are more skins to decorate your desktop.
Pk.Vrsn=2.00 Delta
Pk.VBld=1101
Pk.Athr=Steve Hsu
Pk.SpTo=2.00 Delta
Pk.SpVB=1101
Pk.Wbst.Hd=0
Pk.Wbst=https://github.com/stevehsudrawing/quantoflx

Sl.Tt=#Tm.Quanto_Flx_Misc#
Sl.SuTt.0=#Tm.Skin_List#
Sl.SuTt.1=#Tm.Backup_and_Restore#
Sl.SuTt.2=#Tm.About#
Sl.SuTt.3=
Sl.SuTt.4=
Sl.SuTt.5=
Sl.SuTt.6=
Sl.SuTt.7=
Sl.SuTt.8=
Sl.SuTt.9=

;============ Settings of "Restoring from an older version of backup" Feature ============

; Do users be allowed to "restore from an older version of backup"?
;   0 - No
;   1 - Yes
Rs.AlowRstr=1

; At a minimum, which version of Build is this version compatible with?
Rs.VBldLmtt=1100

; Do you need to exclude files or folders when restoring?
;   0 - No
;   1 - Yes
; If "1" is written, you should fill in the phrase of the file name to be excluded in 
; "RestoreExclusion.txt" (SAVE IT IN UTF-8 ENCODING).
; For example, if you need to exclude "SampleSkin1" and "SampleSkin2", you should write in
; this file (without semicolon and space):
; SampleSkin1
; SampleSkin2
; This will exclude files with the above keywords in their names when performing a restore 
; operation, and the related clone skin setting files will not be restored.
Rs.ExclNeed=0

; Describe why these folders or files are excluded.
;   Example: They are not compatible with the new version
; If you don't need it, leave it blank.
Rs.ExclRasn=