// addr: 0x0107ccc0
// name: RaceConfig_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RaceConfig_ctor(void * this) */

void * __fastcall RaceConfig_ctor(void *this)

{
  int iVar1;
  
                    /* Constructs a RaceConfig, initializing name/string fields, default
                       vectors/ids, and arrays for RaceConfigNpcData and RaceConfigStartLocation. */
  *(undefined ***)this = RaceConfig::vftable;
  *(undefined ***)((int)this + 0x10) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x14) = &DAT_01cb7ad8;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined ***)((int)this + 0x20) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x24) = &DAT_01cb7ad8;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  iVar1 = 0;
  do {
    *(undefined4 *)((int)this + iVar1 * 4 + 0xb4) = DAT_01b83900;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 0;
  do {
    *(undefined4 *)((int)this + iVar1 * 4 + 0xcc) = DAT_01b83900;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined ***)((int)this + 0x134) = SoeUtil::Array<RaceConfigNpcData,0,1>::vftable;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined ***)((int)this + 0x144) = SoeUtil::Array<RaceConfigStartLocation,0,1>::vftable;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  return this;
}

