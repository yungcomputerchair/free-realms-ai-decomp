// addr: 0x007ea180
// name: DeepParticle_VariableBank_Shared_dtor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepParticle_VariableBank_Shared_dtor(void * this) */

void * __fastcall DeepParticle_VariableBank_Shared_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Tears down a DeepParticle::VariableBank::Shared object by restoring its
                       vtable and calling a follow-up cleanup/base destructor. Evidence is the
                       DeepParticle::VariableBank::Shared::vftable assignment and destructor
                       ordering. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01564c63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0073b300(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = DeepParticle::VariableBank::Shared::vftable;
  FUN_007ea000();
  ExceptionList = local_c;
  return this;
}

