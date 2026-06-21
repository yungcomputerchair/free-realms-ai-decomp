// addr: 0x0105f170
// name: DemolitionDerbyConfig_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DemolitionDerbyConfig_ctor(void * this) */

void * __fastcall DemolitionDerbyConfig_ctor(void *this)

{
                    /* Constructs a DemolitionDerbyConfig, initializing string members, numeric
                       defaults, and arrays for NPC data and start locations. */
  *(undefined ***)this = DemolitionDerbyConfig::vftable;
  *(undefined ***)((int)this + 4) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 8) = &DAT_01cb7100;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined ***)((int)this + 0x14) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x18) = &DAT_01cb7100;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined ***)((int)this + 0x88) = SoeUtil::Array<DemolitionDerbyConfigNpcData,0,1>::vftable;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined ***)((int)this + 0x98) =
       SoeUtil::Array<DemolitionDerbyConfigStartLocation,0,1>::vftable;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return this;
}

