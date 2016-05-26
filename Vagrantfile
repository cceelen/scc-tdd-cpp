# -*- mode: ruby -*-
# vi: set ft=ruby :

# All Vagrant configuration is done below. The "2" in Vagrant.configure
# configures the configuration version (we support older styles for
# backwards compatibility). Please don't change it unless you know what
# you're doing.
Vagrant.configure(2) do |config|
  # The most common configuration options are documented and commented below.
  # For a complete reference, please see the online documentation at
  # https://docs.vagrantup.com.
  config.vm.hostname = "dev"

  # Every Vagrant development environment requires a box. You can search for
  # boxes at https://atlas.hashicorp.com/search.
  config.vm.box = "boxcutter/ubuntu1510"

  # Disable automatic box update checking. If you disable this, then
  # boxes will only be checked for updates when the user runs
  # `vagrant box outdated`. This is not recommended.
  # config.vm.box_check_update = false

  # Create a forwarded port mapping which allows access to a specific port
  # within the machine from a port on the host machine. In the example below,
  # accessing "localhost:8080" will access port 80 on the guest machine.
  # config.vm.network "forwarded_port", guest: 80, host: 8080

  # Create a private network, which allows host-only access to the machine
  # using a specific IP.
  # config.vm.network "private_network", ip: "192.168.33.10"

  # Create a public network, which generally matched to bridged network.
  # Bridged networks make the machine appear as another physical device on
  # your network.
  # config.vm.network "public_network"

  # Share an additional folder to the guest VM. The first argument is
  # the path on the host to the actual folder. The second argument is
  # the path on the guest to mount the folder. And the optional third
  # argument is a set of non-required options.
  config.vm.synced_folder ".", "/tdd_cpp"

  # Provider-specific configuration so you can fine-tune various
  # backing providers for Vagrant. These expose provider-specific options.
  # Example for VirtualBox:
  #
   config.vm.provider "virtualbox" do |vb|
     vb.name = "scc-tdd-cpp"
     # Display the VirtualBox GUI when booting the machine
  #   vb.gui = true
  #
     # Customize the amount of memory on the VM:
     vb.memory = 1024
     vb.cpus = 2
   end
  #
  # View the documentation for the provider you are using for more
  # information on available options.

  # Define a Vagrant Push strategy for pushing to Atlas. Other push strategies
  # such as FTP and Heroku are also available. See the documentation at
  # https://docs.vagrantup.com/v2/push/atlas.html for more information.
  # config.push.define "atlas" do |push|
  #   push.app = "YOUR_ATLAS_USERNAME/YOUR_APPLICATION_NAME"
  # end

  # if your network setup requires the defintion of a proxy, then please use the
  # following lines:
  #if Vagrant.has_plugin?("vagrant-proxyconf")
  #  config.proxy.http     = "http://yourproxy"
  #  config.proxy.https    = "http://yourproxy"
  #  config.proxy.no_proxy = "localhost,127.0.0.1"
  #end

  # Enable provisioning with a shell script. Additional provisioners such as
  # Puppet, Chef, Ansible, Salt, and Docker are also available. Please see the
  # documentation for more information about their specific syntax and use.
  config.vm.provision "shell", inline: <<-SHELL
  sudo add-apt-repository ppa:openjdk-r/ppa
  sudo apt-get update
  sudo apt-get install build-essential gcc-4.9 g++-4.9 libcppunit-dev make cmake libgtest-dev git vim libboost-all-dev unzip joe openjdk-8-jdk -y
  sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-4.9 60 --slave /usr/bin/g++ g++ /usr/bin/g++-4.9
  wget https://s3-eu-west-1.amazonaws.com/conanio-production/downloads/conan-ubuntu-64_0_7_4.deb
  sudo dpkg -i conan-ubuntu-64_0_7_4.deb
  rm conan-ubuntu-64_0_7_4.deb
  echo "\n"
  echo "Installing Go 1.6 ...\n"
  sudo wget https://storage.googleapis.com/golang/go1.6.linux-amd64.tar.gz
  sudo tar -C /usr/local -xzf go1.6.linux-amd64.tar.gz
  sudo rm go1.6.linux-amd64.tar.gz
  export PATH=$PATH:/usr/local/go/bin
  export GOPATH=/tdd_cpp/gocode
  go run $GOPATH/src/installation_test/hello.go
  cd /tdd_cpp/java && javac Hello.java && java HelloWorld
  echo '\n******************************'
  echo 'Enjoy your TDD session!\n'
  echo '******************************'
   SHELL
end
