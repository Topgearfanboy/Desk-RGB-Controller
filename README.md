# Basic Addressable RGB Lighting Controller Project
### What is this?
This is a project that contains the files and instructions to create your own RGB Light Controller project. This implementation is used to add Lighting to a desk but could easily be adapted into other formats.

<img width="400" alt="Desk with lights" src="https://github.com/user-attachments/assets/255b771f-4c75-43db-a524-f9e26f5831cc">

## Files Included
  - Arduino Files
  - 3D STL Files for 3d printing
## Project Features
- On / Off switch
- Lighting Mode Switch
  - Red
  - Green
  - Blue
  - Transitioning Pattern
 
## Needed Parts

- 5v Rated RBG Lighting Strip [Example](https://a.co/d/iguN1RD)
- Arduino (Used Uno but Others Could be)
- Breadboard [Example](https://www.amazon.com/gp/product/B07PCJP9DY/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1_)
- Mirco Switch [Example](https://www.amazon.com/DAOKI-Miniature-Momentary-Tactile-Quality/dp/B01CGMP9GY/ref=sr_1_3?crid=2AO0WSKT401WX&dib=eyJ2IjoiMSJ9.zSZfkD4bnNdPv50weINxWIsLGpmkQtr19xiPn788h3OFlZLEX_5GP0-u9SQ7pO0npv5drQOe0SPtYDKpZQZqdk48o0_GD2XIvtkC0UBQiawYkI3zmN6TBwhYNakPm_zqPCOmFG27E9X0TrYgkQANTlDrucgwso8HKVYleOAeKOAPZRotYdJS7Bxx9PUi-1Qk8kiBFS9XtxlQsFdR-57dSbJZeRFz6pMjl2avpZFFKoE.BoF1oYhEt01W1CsMVvlhsdtepY00aCypDrg5fox2NxQ&dib_tag=se&keywords=tiny%2Bbutton%2Belectronics&qid=1732493278&sprefix=tiny%2Bbutton%2Bele%2Caps%2C110&sr=8-3&th=1)
- Power Supply [Example](https://www.amazon.com/gp/product/B0BNQ6Y88J/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1) - Note: this can be dangerous if not covered safely or wired incorrectly. Please be cautious! As well, when using this power supply it is preferable to tune it using the fine adjustment knob to exactly 5v using a multimeter. This will also help protect the arduino if using the main power supply as well.

## Needed Tools
- 3d printer (or 3d printing service)
- wire strippers/cutters
- Soldering Iron / solder 
  
## Wiring Diagram
![Control Box Wiring Diagram](https://github.com/user-attachments/assets/c2795294-6def-41e6-8a19-78566131067b)
## Case Parts
Note: some holes will need to be modified after print. I used a drill press but normal drill could be used as well. 

- ### Lid 
  <img width="400" alt="Control Box Lid" src="https://github.com/user-attachments/assets/53287427-9a4f-4c08-9f52-ac8f97dcd5a0">
- ### Case 
    <img width="400" alt="Control Box Case Diagram" src="https://github.com/user-attachments/assets/65249380-d1d4-4527-8170-c98f663e1c83">
#### Diagram Legend
  - Ports for external on/off switch \
    Ex.\
     <img src="https://github.com/user-attachments/assets/22ea5746-bb0d-4d35-922c-bf5045745ca0" alt="alt text" width="200">
  - Toggle switch to switch between lighting modes \
    Ex.
    
    <img src="https://github.com/user-attachments/assets/5f5dcc70-88bf-49b0-815a-5d22c0213232" alt="alt text" width="200">
  - Connection to lights
  - Connection to Power Supply 
   Note: be sure voltages and power requirements of your setup are applicable for the design. I am using a 5V Power Supply to power the arduino and the RGB strip. This is not always a good idea as you have to feed the arduino 5v after the regulator which does work but can break the arduino if done incorrectly.


