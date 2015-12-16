# coding: utf-8
lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'cmock/version'

Gem::Specification.new do |spec|
  spec.name          = "cmock"
  spec.version       = Cmock::VERSION
  spec.authors       = ["Mike Karlesky", "Mark VanderVoord", "Greg Williams"]
  spec.email         = ["job.vranish@gmail.com"]
  spec.summary       = %q{CMock - Mock/stub generator for C}
  spec.description   = %q{A Mock/stub generator for C}
  spec.homepage      = "https://github.com/ThrowTheSwitch/CMock"
  spec.license       = "MIT"

  spec.files         = `git ls-files -z`.split("\x0")
  spec.bindir        = "lib"
  spec.executables   = [
    "cmock.rb",]
  spec.test_files    = spec.files.grep(%r{^(test|spec|features)/})
  spec.require_paths = ["lib"]

  spec.add_runtime_dependency "bundler"
  spec.add_runtime_dependency "rake"

  spec.add_runtime_dependency "minitest"
  spec.add_runtime_dependency "require_all"
  spec.add_runtime_dependency "constructor"
  spec.add_runtime_dependency "diy"

  spec.add_runtime_dependency "unity"
  spec.add_runtime_dependency "c_exception"

end
