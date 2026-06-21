// addr: 0x0142a880
// name: CommandObject_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObject.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_deserialize(void * this, void * stream) */

void __thiscall CommandObject_deserialize(void *this,void *stream)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  char extraout_AL;
  void *pvVar4;
  int iVar5;
  undefined4 *extraout_EAX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  undefined4 uVar9;
  uint *outValue;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 local_10 [3];
  int iStack_4;
  
                    /* Reads the common CommandObject state from a stream/archive, resolving
                       card/play-element references and then dispatching to derived pre/post
                       serialization hooks. */
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream,local_10);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0xea);
  }
  bVar3 = PlayElement_deserialize(this,stream);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0xed);
  }
  bVar3 = Deserializer_readString(stream,(void *)((int)this + 0x40));
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0xf0);
  }
  bVar3 = Deserializer_readInteger(stream,&iStack_4);
  iVar5 = extraout_EDX;
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0xf3);
    iVar5 = extraout_EDX_00;
  }
  if (iStack_4 != 0) {
    uVar9 = 0;
    pTVar8 = &Card::RTTI_Type_Descriptor;
    pTVar7 = &PlayElement::RTTI_Type_Descriptor;
    uVar6 = 0;
    pvVar4 = find_play_element_in_maps(*(void **)((int)this + 0x28),iVar5);
    iVar5 = FUN_00d8d382(pvVar4,uVar6,pTVar7,pTVar8,uVar9);
    *(int *)((int)this + 0x5c) = iVar5;
    if (iVar5 == 0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0xf7);
    }
  }
  bVar3 = Deserializer_readInteger(stream,(int *)&stack0xffffffc4);
  iVar5 = extraout_EDX_01;
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0xfc);
    iVar5 = extraout_EDX_02;
  }
  if (unaff_ESI != 0) {
    pvVar4 = find_play_element_in_maps(*(void **)((int)this + 0x28),iVar5);
    *(void **)((int)this + 0x60) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x100);
    }
  }
  bVar3 = Deserializer_readInteger(stream,(int *)&stack0xffffffc8);
  iVar5 = extraout_EDX_03;
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x105);
    iVar5 = extraout_EDX_04;
  }
  if ((unaff_EBP != 0) && (*(void **)((int)this + 0x5c) != (void *)0x0)) {
    pvVar4 = Card_getActionByID(*(void **)((int)this + 0x5c),iVar5);
    *(void **)((int)this + 100) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x109);
    }
  }
  bVar3 = Deserializer_readInteger(stream,&iStack_34);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x10e);
  }
  *(int *)((int)this + 0x6c) = iStack_34;
  bVar3 = Deserializer_readInteger(stream,&iStack_30);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x112);
  }
  *(int *)((int)this + 0x70) = iStack_30;
  bVar3 = Deserializer_readInteger(stream,&iStack_2c);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x116);
  }
  *(int *)((int)this + 0x74) = iStack_2c;
  bVar3 = Deserializer_readInteger(stream,&iStack_28);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x11a);
  }
  *(bool *)((int)this + 0x79) = iStack_28 != 0;
  bVar3 = Deserializer_readInteger(stream,&iStack_24);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x11e);
  }
  pcVar1 = *(code **)(*(int *)((int)this + 0x7c) + 0x24);
  *(bool *)((int)this + 0x7a) = iStack_24 != 0;
  outValue = stream;
  cVar2 = (*pcVar1)();
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x122);
  }
  bVar3 = Deserializer_readInteger(stream,&iStack_24);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x125);
  }
  *(bool *)((int)this + 0x110) = iStack_24 != 0;
  bVar3 = Deserializer_readInteger(stream,&iStack_20);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x129);
  }
  *(int *)((int)this + 0x114) = iStack_20;
  if (1 < iStack_1c) {
    bVar3 = Deserializer_readInteger(stream,(int *)((int)this + 0x118));
    if (!bVar3) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x12e);
    }
  }
  Deserializer_readInteger(stream,&iStack_18);
  if (bVar3 == false) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x132);
  }
  *(bool *)((int)this + 0x78) = iStack_18 != 0;
  if (iStack_18 == 0) {
    bVar3 = Deserializer_readInteger(stream,&iStack_14);
    if (!bVar3) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x13d);
    }
    if (iStack_14 == 0) {
      bVar3 = PacketBuffer_readPackedUInt(stream,local_10,outValue);
      if (!bVar3) {
        FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x144);
      }
      ComponentFactory_initSingleton();
      pvVar4 = (void *)(**(code **)*extraout_EAX)(local_10[0]);
      if (pvVar4 == (void *)0x0) {
        FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x14a);
      }
      *(void **)((int)this + 0x68) = pvVar4;
      ReturnValueMap_serialize(pvVar4,stream,*(void **)((int)this + 0x28));
      if (extraout_AL == '\0') {
        FUN_012f5a60("false","..\\common\\common\\command\\CommandObject.cpp",0x150);
      }
    }
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

