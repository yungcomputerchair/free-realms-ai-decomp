// addr: 0x00878590
// name: DeepParticle_ParticleControllerInstance_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeepParticle_ParticleControllerInstance_ctor(void * this, void *
   controller, void * particleSystem) */

void __thiscall
DeepParticle_ParticleControllerInstance_ctor(void *this,void *controller,void *particleSystem)

{
                    /* Constructs a DeepParticle::ParticleControllerInstance, assigns its vtable,
                       stores two constructor arguments, and clears state fields/flag. */
  *(undefined ***)this = DeepParticle::ParticleControllerInstance::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = controller;
  *(void **)((int)this + 0x10) = particleSystem;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  return;
}

