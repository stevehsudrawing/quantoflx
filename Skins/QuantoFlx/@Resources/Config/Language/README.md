# About translation

Welcome your contributions of translation!

If you are interested in translation, please read the following.

# What and how to translate

There are files you need to translate or localize:

* `QuantoFlx\@Resources\Config\Language\en-us\*.inc` and `CalendarEvents.xml`

* `QuantoFlx\Package\*\@\Config\Language\en-us\*.inc`

Duplicate these `en-us` folder in their location and rename it as a language code, such as `fr-fr` represents "français (France)" and `de-de` represents "Deutsch (Deutschland)". This language code **must be a valid value in Windows**, as this language code will be used for most translations involving times and dates. For details, see [[MS-LCID]: Windows Language Code Identifier (LCID) Reference](https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c).

You can edit these with any text editor. 

> [!CAUTION]
> If there is no special instructions, please **save your files with "UTF-16 LE" or "UTF-16 LE with BOM" encoding** to avoid garbled characters.

When you need to **test your translation**, please modify `Lg` Key Value in `QuantoFlx\@Resources\Config\Settings.inc` as the code of the language what you're translating, then refresh all skins.

## Description of language files

Every key has a name and a value, delimited by an equals sign `=`, and the name appears to the left of it. 

`(Key name) = (Key value)`

When translating, please **modify the key value, not its name**.

### About key names

| Key names starting with		| Represent as			|
|---------------------------------------|-------------------------------|
| `Tm.`					| Terms				|
| `St.`					| Sentences			|
| `Dv.`					| Default values		|
| `OpLs.*.Nm`				| The name of skin		|
| `OpLs.*.Dc`				| The description of skin	|
| Other keywords in language file	| Terms or sentences		|

### About key values

`#CRLF#` or `[#CRLF]` means "wrap the text to the next line".

There may be some [QFCTF identifiers](https://github.com/stevehsudrawing/quantoflx/wiki/QFS-%E2%80%90-QFSDI-%E2%80%90-current-skin-path-%E2%80%90-skin-config-%E2%80%90-for-all-skin-types#with-quanto-flx-common-text-formats-support) in the text (such as `**`, `//`, `__`, etc). When translating, these identifiers should be added at the corresponding positions in the text.

There are **something you shouldn't translate**, such as names of variable keys (nouns enclosed in brackets `[]` or Tic Tac Letters `#`) , `%x`, and some proper noun (such as "Quanto Flx").

# I want to contribute to the translation, but how should I do?

## Create a Pull Request

1. Fork the repository (**in [`snapshot` branch](https://github.com/stevehsudrawing/quantoflx/tree/snapshot)**), and **clone** the repository you just forked to your computer.

2. Complete your translation work in this folder.

3. Push the changes you make in this repository to GitHub.

4. Create a pull request. Please provide the localized name of your language.

Your work will be adopted to be an available selection in Global Settings in the next version.

## Send to Our Email Address

1. **Clone** the repository (**in [`snapshot` branch](https://github.com/stevehsudrawing/quantoflx/tree/snapshot)**).

2. You can copy the above files to other folders and then complete the translation work.

3. Pack these files into a zip archive and send it to the [Quanto Series email address](mailto://quantoseries@outlook.com) (either as an attachment or a web file sharing link). Please provide the localized name of your language and your GitHub user name.

Your work will be adopted to be an available selection in Global Settings in the next version.
