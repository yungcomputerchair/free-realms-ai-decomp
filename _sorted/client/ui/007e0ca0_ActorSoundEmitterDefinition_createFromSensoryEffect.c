// addr: 0x007e0ca0
// name: ActorSoundEmitterDefinition_createFromSensoryEffect
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ActorSoundEmitterDefinition_createFromSensoryEffect(void * this, void *
   definition, int id_) */

void * __thiscall
ActorSoundEmitterDefinition_createFromSensoryEffect(void *this,void *definition,int id_)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  
                    /* Allocates/registers a sensory effect definition under an id if it does not
                       already exist, then dynamic-casts the created definition to
                       ActorSoundEmitterDefinition. The target class is named by RTTI. */
  if (id_ == 0) {
    iVar1 = FUN_0070aab0(*(undefined4 *)((int)definition + 4));
  }
  else {
    iVar1 = FUN_00709a70(id_);
  }
  if (iVar1 != 0) {
    return (void *)0x0;
  }
  if (id_ == 0) {
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
    id_ = *(int *)((int)this + 0x28);
  }
  else if (*(int *)((int)this + 0x28) < id_) {
    *(int *)((int)this + 0x28) = id_;
  }
  uVar2 = (**(code **)(*(int *)this + 0x18))(id_,definition);
  pvVar3 = (void *)FUN_00d8d382(uVar2,0,&SensoryEffectDefinition::RTTI_Type_Descriptor,
                                &ActorSoundEmitterDefinition::RTTI_Type_Descriptor,0);
  return pvVar3;
}

