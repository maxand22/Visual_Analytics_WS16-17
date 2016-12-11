
all:
	@(cd sipgen; $(MAKE))
	@(cd siplib; $(MAKE))

install:
	@(cd sipgen; $(MAKE) install)
	@(cd siplib; $(MAKE) install)
	@test -d $(DESTDIR)/Library/Python/2.7/site-packages || mkdir -p $(DESTDIR)/Library/Python/2.7/site-packages
	cp -f sipconfig.py $(DESTDIR)/Library/Python/2.7/site-packages/sipconfig.py
	cp -f /Users/behdad/Documents/Visual_Analytics_WS16-17/lib/sip-4.18.1/sipdistutils.py $(DESTDIR)/Library/Python/2.7/site-packages/sipdistutils.py

clean:
	@(cd sipgen; $(MAKE) clean)
	@(cd siplib; $(MAKE) clean)
