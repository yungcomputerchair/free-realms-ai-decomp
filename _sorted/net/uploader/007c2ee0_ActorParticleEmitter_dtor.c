// addr: 0x007c2ee0
// name: ActorParticleEmitter_dtor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorParticleEmitter_dtor(void * this) */

void __fastcall ActorParticleEmitter_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Sets the ActorParticleEmitter vtable during teardown and frees an owned heap
                       pointer at offset 0xb8. Evidence is the explicit
                       ActorParticleEmitter::vftable assignment and destructor-like final free. */
  puStack_8 = &LAB_01560168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = ActorParticleEmitter::vftable;
  local_4 = 0;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 0xb8));
}

