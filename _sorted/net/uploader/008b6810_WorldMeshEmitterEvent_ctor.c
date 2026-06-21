// addr: 0x008b6810
// name: WorldMeshEmitterEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WorldMeshEmitterEvent_ctor(void * this, int arg1_, int arg2_, void *
   effectResource) */

void * __thiscall WorldMeshEmitterEvent_ctor(void *this,int arg1_,int arg2_,void *effectResource)

{
  int iVar1;
  uint in_stack_00000010;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs WorldMeshEmitterEvent from WorldEffectEvent, stores/refcounts the
                       emitter resource, and clears a state field. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015809c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WorldEffectEvent_ctor(this,(void *)arg1_,(void *)arg2_,in_stack_00000010);
  local_4 = 0;
  *(undefined ***)this = WorldMeshEmitterEvent::vftable;
  *(undefined ***)((int)this + 0x44) = WorldMeshEmitterEvent::vftable;
  *(void **)((int)this + 0x90) = effectResource;
  *(undefined4 *)((int)this + 0x94) = 0;
  iVar1 = *(int *)((int)effectResource + 8);
  *(int *)((int)effectResource + 8) = iVar1 + 1;
  if (iVar1 == 0) {
    (**(code **)(*(int *)effectResource + 0x24))();
  }
  ExceptionList = local_c;
  return this;
}

