// addr: 0x013df660
// name: Engine_FRTWTournamentService_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_FRTWTournamentService_ctor(void * this) */

void * __fastcall Engine_FRTWTournamentService_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::FRTWTournamentService by running a base service
                       constructor and installing the class vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168cf48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_TournamentServiceBase_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = Engine::FRTWTournamentService::vftable;
  ExceptionList = local_c;
  return this;
}

