// addr: 0x00776f40
// name: ActorParticleEmitter_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ActorParticleEmitter_ctor(void * this, void * owner, void * arg3, void
   * arg4, void * particleSystem) */

void * __thiscall
ActorParticleEmitter_ctor(void *this,void *owner,void *arg3,void *arg4,void *particleSystem)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ActorParticleEmitter from ActorEffectEmitter base, stores the
                       particle-system argument, and initializes handle/state fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01557c28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorEffectEmitter_ctor(this,(int)owner,(int)arg3,(int)arg4);
  *(undefined ***)this = ActorParticleEmitter::vftable;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(void **)((int)this + 0xac) = particleSystem;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xb8) = 0;
  ExceptionList = local_c;
  return this;
}

