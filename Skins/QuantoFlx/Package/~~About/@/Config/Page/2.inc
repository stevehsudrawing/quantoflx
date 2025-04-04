[Variables]
Pg.Ty=Empty

[Mt.Ip.Im.01]
Meter=Image
MeterStyle=St.ZnPg
ImageName=#Pk@#Image\GetStarted\00.png
DynamicVariables=1
PreserveAspectRatio=1
Y=(#CURRENTCONFIGHEIGHT#-256*#sc#)
W=(576*#sc#)
ImageTint=255,255,255,32
Greyscale=1

[Mt.Text]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Ww
Text=Quanto Series (includes Original & Flx, hereinafter referred to as Quanto) is inspired by Fluent Design System and Windows 11 user interface. The project is not using any code from Windows 11. The graphics were created from scratch to resemble the ones of Windows 11. Any resemblances to existing or future Microsoft(R) products are for customization purposes only, but also with an intention to raise awareness of the mentioned products within the community.#CRLF##CRLF#Quanto is a non-profit product that is free forever and does not coerce users to pay. Any donation is voluntary.#CRLF##CRLF#Quanto Flx provides "Package" functionality. We cannot guarantee the security of Package because there are many sources of Package. Package creators are requested to follow the Quanto Flx Package Design Specifications (aka QFPDS).#CRLF##CRLF#Quanto Flx ("Weather" skin in "Gadgets" Package) uses Open-Meteo to provide weather services. Quanto don't collect location information from users, which is only used to provide local weather services.#CRLF##CRLF#Quanto is an Open Source Customization Project available on GitHub.#CRLF##CRLF#Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.#CRLF##CRLF#THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
W=((528-24)*#sc#)
X=(60*#sc#)
Y=(156*#sc#)
InlinePattern=#CRLF##CRLF#
InlineSetting=Size | (5*#Sc#*#Ft.Sc.Gn#)