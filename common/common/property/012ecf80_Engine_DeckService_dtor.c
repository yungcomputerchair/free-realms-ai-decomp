// addr: 0x012ecf80
// name: Engine_DeckService_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_DeckService_dtor(void * this) */

void __fastcall Engine_DeckService_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for Engine::DeckService: installs the Engine::DeckService vftable
                       and delegates cleanup to FUN_013aa090. The vftable symbol identifies the
                       class. */
  puStack_8 = &LAB_01673668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::DeckService::vftable;
  local_4 = 0xffffffff;
  FRTWDeckService_dtor(this);
  ExceptionList = local_c;
  return;
}

