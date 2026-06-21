// addr: 0x013aa090
// name: FRTWDeckService_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FRTWDeckService_dtor(void * this) */

void __fastcall FRTWDeckService_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for Engine::FRTWDeckService. It installs the FRTWDeckService
                       vtable, then destructs the DeckServiceBase portion via FUN_013de920. */
  puStack_8 = &LAB_016864d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::FRTWDeckService::vftable;
  local_4 = 0xffffffff;
  Engine_DeckServiceBase_dtor(this);
  ExceptionList = local_c;
  return;
}

