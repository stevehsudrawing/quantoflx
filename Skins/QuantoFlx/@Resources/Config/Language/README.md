# About translation

Welcome your contributions of translation!

If you are interested in translation, please read the following.

# What and how to translate

There are files you need to translate or localize:

* `QuantoFlx\@Resources\Config\Language\en-us\*.inc` and `CalendarEvents.xml`

* `QuantoFlx\Package\*\@\Config\Language\en-us\*.inc`

You can duplicate these `en-us` folder and rename it as a language code, such as `en-us` represents `English (United States)` and `fr-fr` represents `Français (France)`. This language code **must be a valid value**, as this language code will be used for most translations involving times and dates. For details, see [[MS-LCID]: Windows Language Code Identifier (LCID) Reference](https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c).

You can edit these with any text editor. Please save your files with `UTF-16 LE` or `UTF-16 LE with BOM` encoding to avoid garbled characters.

When you need to **test your translation**, please modify `Lg` Key Value in `QuantoFlx\@Resources\Config\Settings.inc` as the code of the language what you're translating, then refresh all skins.

## Description of language files

Every key has a name and a value, delimited by an equals sign (=), and the name appears to the left of it. 

`(Key name) = (Key value)`

When translating, please **modify the key value, not its name**.

### About key names

|Key names starting with|Represent as|
|-|-|
|`Tm.`|Terms|
|`St.`|Sentences|
|`Dv.`|Default values|
|`OpLs.*.Nm`|The name of skin|
|`OpLs.*.Dc`|The description of skin|
|Other keywords in language file|Terms or sentences|

### About key values

`#CRLF#` or `[#CRLF]` means "wrap the text to the next line".

There are **something you shouldn't translate**, such as names of variable keys (nouns enclosed in brackets `[]` or Tic Tac Letters `#`) and `%x`.

# How to upload

When you completed your work and want to upload them in GitHub, please:

1. Fork the repository.

2. Upload these files in the appropriate directory. You can do this with the help of [GitHub Desktop](https://desktop.github.com).

3. Create a pull request. Please provide the English name and the localized name of your language.

When you **uploaded your files**, your work will be adopted to be an available selection in Global Settings in the next version.