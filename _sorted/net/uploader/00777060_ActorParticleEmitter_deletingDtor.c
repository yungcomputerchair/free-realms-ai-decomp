// addr: 0x00777060
// name: ActorParticleEmitter_deletingDtor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ActorParticleEmitter_deletingDtor(void * this, byte flags_) */

void * __thiscall ActorParticleEmitter_deletingDtor(void *this,byte flags_)

{
  byte in_stack_00000008;
  
                    /* Deleting destructor wrapper for ActorParticleEmitter; calls
                       ActorParticleEmitter_dtor and frees this when requested. */
  ActorParticleEmitter_dtor(this);
  if ((in_stack_00000008 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

