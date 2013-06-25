Pod::Spec.new do |s|
  s.name         = "MJUIHelper"
  s.version      = "0.0.1"
  s.summary      = "Some UI helper package for you. Include: Block-based alert/actionsheet, UIControl extensions."
  s.homepage     = "https://github.com/DDany"
  s.license 	 = 'LICENSE'
  s.author       = { "Dany" => "Dany" }
  s.source       = { :git => "https://github.com/DDany/MJUIHelper.git", :commit => 'f18d75cb8cbf6e2578feaec43884a20aa4172618' }
  s.platform     = :ios, '5.0'
  s.source_files = '*.{h,m}'
  s.framework  = 'UIKit'
  s.requires_arc = true
end
