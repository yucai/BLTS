Summary: BLTS V4L2 test set
Name: blts-v4l2-tests
Version: 0.3.12
Release: 1
License: GPLv2
Group: Development/Testing
URL: http://wiki.meego.com/Quality/TestSuite/Camera_Driver_Test_Specification
Source0: %{name}-%{version}.tar.gz
BuildRoot: %{_tmppath}/%{name}-%{version}-%{release}-root
BuildRequires: libbltscommon-devel libbltspixelformat-devel
BuildRequires: libjpeg-devel libX11-devel libXv-devel
Requires: blts-v4l2-tests-config

%package config-example
Summary: BLTS V4L2 test config example
Provides: blts-v4l2-tests-config

%description
This package contains functional tests for V4L2.

%description config-example
This package contains configuration example for V4L2 functional tests.

%prep
%setup -q

%build
./autogen.sh
%configure
make

%install
rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root,-)
%doc README COPYING
/usr/bin/*
/usr/lib/tests/%{name}/*

%files config-example
%defattr(-,root,root,-)
%config /etc/blts/blts-v4l2-tests.cnf
%config /etc/blts/blts-v4l2-n900.cnf
%config /etc/blts/blts-v4l2-vivi.cnf
/usr/share/blts-v4l2-tests/tests.xml
