// addr: 0x008b6130
// name: WorldEffectEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WorldEffectEvent_ctor(void * this, void * effectDef, void *
   matrixOrTransform, uint flags_) */

void * __thiscall
WorldEffectEvent_ctor(void *this,void *effectDef,void *matrixOrTransform,uint flags_)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a WorldEffectEvent, initializes EffectEventInterface vtable slots,
                       stores a flag/handle, and copies 16 dwords of transform-like data. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015808e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007e78e0();
  *(undefined ***)((int)this + 0x44) = EffectEventInterface::vftable;
  *(undefined ***)this = WorldEffectEvent::vftable;
  *(undefined ***)((int)this + 0x44) = WorldEffectEvent::vftable;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(uint *)((int)this + 0x4c) = flags_;
  puVar2 = (undefined4 *)((int)this + 0x50);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)matrixOrTransform;
    matrixOrTransform = (undefined4 *)((int)matrixOrTransform + 4);
    puVar2 = puVar2 + 1;
  }
  ExceptionList = local_c;
  return this;
}

