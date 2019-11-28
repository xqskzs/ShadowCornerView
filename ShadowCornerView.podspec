
Pod::Spec.new do |spec|
  spec.name         = "ShadowCornerView"
  
  
  spec.version      = "1.0.0"
  
  
  spec.summary      = "Any side shadow and any corner round view."


  spec.description  = <<-DESC
  
  
  Any side shadow and any corner roundview.可以对一个view设置任意条边阴影，任意个角圆角
                   DESC

  spec.homepage     = "https://github.com/xqskzs/ShadowCornerView"
 

  spec.license      = { :type => "MIT", :file => "LICENSE"  }


  spec.author       = { "Zhiqiang Li" => "18770214771@163.com" }


  spec.platform     = :ios, "9.0"


  spec.source       = { :git => "https://github.com/xqskzs/ShadowCornerView.git", :tag => "#{spec.version}" }

  
  spec.source_files  = "ShadowCornerView/**/*.{h,m}"

 
  spec.requires_arc  = true


  spec.frameworks    = "Foundation","UIKit"

end
