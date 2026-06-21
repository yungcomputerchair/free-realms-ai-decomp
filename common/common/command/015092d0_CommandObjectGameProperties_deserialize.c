// addr: 0x015092d0
// name: CommandObjectGameProperties_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectGameProperties.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectGameProperties_deserialize(void * this, void * stream) */

void __thiscall CommandObjectGameProperties_deserialize(void *this,void *stream)

{
  code *pcVar1;
  char cVar2;
  char extraout_AL;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  undefined4 uVar9;
  int *piStack_14;
  int local_4;
  
                    /* Deserializes CommandObjectGameProperties by reading base command data, a
                       property id/value container, and an optional AddToken play element reference.
                        */
  piStack_14 = &local_4;
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectGameProperties.cpp",0x46);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectGameProperties.cpp",0x49);
  }
  bVar3 = Deserializer_readInteger(stream,&local_4);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectGameProperties.cpp",0x4c);
  }
  pcVar1 = *(code **)(*(int *)((int)this + 0x120) + 0x24);
  *(int *)((int)this + 0x11c) = local_4;
  cVar2 = (*pcVar1)(stream);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectGameProperties.cpp",0x50);
  }
  bVar3 = Deserializer_readInteger(stream,(int *)&piStack_14);
  iVar5 = extraout_EDX;
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectGameProperties.cpp",0x53);
    iVar5 = extraout_EDX_00;
  }
  if (piStack_14 != (int *)0x0) {
    uVar9 = 0;
    pTVar8 = &CommandObject_AddToken::RTTI_Type_Descriptor;
    pTVar7 = &PlayElement::RTTI_Type_Descriptor;
    uVar6 = 0;
    pvVar4 = find_play_element_in_maps(*(void **)((int)this + 0x28),iVar5);
    iVar5 = FUN_00d8d382(pvVar4,uVar6,pTVar7,pTVar8,uVar9);
    *(int *)((int)this + 300) = iVar5;
    if (iVar5 == 0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectGameProperties.cpp",0x57);
    }
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

