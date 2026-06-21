// addr: 0x00c93410
// name: ItemDefinitionDsUpdateDispatcher_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ItemDefinitionDsUpdateDispatcher_ctor(void * this) */

void * __fastcall ItemDefinitionDsUpdateDispatcher_ctor(void *this)

{
                    /* Constructs the singleton ItemDefinitionDsUpdateDispatcher by installing its
                       singleton/base vtables and clearing three state fields. */
  *(undefined ***)this = Singleton<ItemDefinitionDsUpdateDispatcher>::vftable;
  *(undefined ***)this = ItemDefinitionDsUpdateDispatcher::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return this;
}

