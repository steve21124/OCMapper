Pod::Spec.new do |s|
  s.name         = 'OCMapper'
  s.version      = '0.0.1'                                                                  # 1
  s.summary      = 'OCMapper' # 2
  s.source       = { :git => 'https://github.com/steve21124/OCMapper.git' }      # 4
  s.source_files = 'OCMapper/Source/**/*.{h,m}'                                         # 5
  s.xcconfig  =  { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/OCMapper"' }
end