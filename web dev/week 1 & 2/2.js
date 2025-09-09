// this is a traditional method of using class in js
// let rect3 ={
//     width :20,
//     height:10
// }

//     return rect3.width * rect3.height
// }

// console.log(area(rect3));





 
// but this is a new method of using class in js 


class Rectangle {
    constructor(width, height, color) {
         this.width = width;
         this.height = height;
         this.color = color; 
    }
    
    area() {
        const area = this.width * this.height;
          return area;
    }
    
    paint() {
             console.log("Painting with color " + this.color) ;
    }
    
 }
 
 const rect = new Rectangle(2, 4,"red") // instance
 const rect2 = new Rectangle(10,20,"black")

//  const colorss = rect.paint();
//  console.log(colorss);

 const area = rect.area();
 console.log(area)

 const area2 = rect2.area();
 console.log(area2)