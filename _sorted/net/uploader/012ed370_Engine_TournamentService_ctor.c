// addr: 0x012ed370
// name: Engine_TournamentService_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_TournamentService_ctor(void * this) */

void * __fastcall Engine_TournamentService_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::TournamentService by invoking a base initializer and
                       installing the TournamentService vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_FRTWTournamentService_ctor(this);
  *(undefined ***)this = Engine::TournamentService::vftable;
  ExceptionList = local_c;
  return this;
}

