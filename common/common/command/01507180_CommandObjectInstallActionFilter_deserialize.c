// addr: 0x01507180
// name: CommandObjectInstallActionFilter_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectInstallActionFilter.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectInstallActionFilter_deserialize(void * this, void * stream)
    */

void __thiscall CommandObjectInstallActionFilter_deserialize(void *this,void *stream)

{
  char cVar1;
  char extraout_AL;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 uVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  undefined4 uVar8;
  void *local_4;
  
                    /* Deserializes InstallActionFilter by reading base command data, resolving an
                       optional ValidActionFilter play element, and reading the serialized
                       expression/filter value. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallActionFilter.cpp",0x3d);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallActionFilter.cpp",0x40);
  }
  bVar2 = Deserializer_readInteger(stream,(int *)&local_4);
  iVar4 = extraout_EDX;
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallActionFilter.cpp",0x43);
    iVar4 = extraout_EDX_00;
  }
  if (local_4 != (void *)0x0) {
    uVar8 = 0;
    pTVar7 = &ValidActionFilter::RTTI_Type_Descriptor;
    pTVar6 = &PlayElement::RTTI_Type_Descriptor;
    uVar5 = 0;
    pvVar3 = find_play_element_in_maps(*(void **)((int)this + 0x28),iVar4);
    iVar4 = FUN_00d8d382(pvVar3,uVar5,pTVar6,pTVar7,uVar8);
    *(int *)((int)this + 0x11c) = iVar4;
    if (iVar4 == 0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallActionFilter.cpp",0x47)
      ;
    }
  }
  bVar2 = PersistentComponent_deserializePointer(stream,(void *)((int)this + 0x120));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallActionFilter.cpp",0x4c);
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

