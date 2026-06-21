// addr: 0x01345990
// name: Player_deserialize
// subsystem: common/common/game
// source (binary assert): common/common/game/Player.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Player_deserialize(void * this, void * stream) */

bool __thiscall Player_deserialize(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *pvVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  int *outValue;
  undefined4 uVar9;
  int iStack_1c;
  int iStack_18;
  int aiStack_14 [2];
  int iStack_c;
  undefined1 local_8 [4];
  int iStack_4;
  
                    /* Deserializes Player fields including account id, player play area,
                       collections, and a Card reference. It dynamic-casts serialized PlayElement
                       handles to PlayerPlayArea and Card. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,local_8);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\Player.cpp",0x3c6);
  }
  bVar2 = Deserializer_readInteger(stream,&iStack_c);
  if (bVar2) {
    if (*(char *)((int)this + 0x48) == '\0') {
      outValue = (int *)((int)this + 0x38);
    }
    else {
      outValue = &iStack_4;
      iStack_4 = 0;
    }
    bVar2 = Deserializer_readInteger(stream,outValue);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(stream,&iStack_18);
      if (bVar2) {
        bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffdc);
        if (bVar2) {
          *(undefined4 *)((int)this + 0x40) = unaff_EDI;
          bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffe0);
          if (bVar2) {
            *(undefined4 *)((int)this + 0x44) = unaff_ESI;
            Game_logGeneral(*(void **)((int)this + 8),"AccountID: %d",
                            *(undefined4 *)((int)this + 0x38));
            bVar2 = Deserializer_readInteger(stream,&iStack_1c);
            if (!bVar2) {
              FUN_012f5a60("false","..\\common\\common\\game\\Player.cpp",0x3e2);
            }
            uVar9 = 0;
            pTVar8 = &PlayerPlayArea::RTTI_Type_Descriptor;
            pTVar7 = &PlayElement::RTTI_Type_Descriptor;
            uVar6 = 0;
            pvVar4 = find_play_element_in_maps(*(void **)((int)this + 8),iStack_1c);
            iVar5 = FUN_00d8d382(pvVar4,uVar6,pTVar7,pTVar8,uVar9);
            *(int *)((int)this + 4) = iVar5;
            if (iVar5 == 0) {
              FUN_012f5a60("false","..\\common\\common\\game\\Player.cpp",0x3e5);
            }
            bVar2 = Deserializer_readInteger(stream,&iStack_18);
            if (!bVar2) {
              FUN_012f5a60("false","..\\common\\common\\game\\Player.cpp",0x3e9);
            }
            bVar2 = Deserializer_readString(stream,(void *)((int)this + 0xc));
            if (!bVar2) {
              FUN_012f5a60("false","..\\common\\common\\game\\Player.cpp",0x3ec);
            }
            cVar1 = FUN_01302e20(stream,(int)this + 0x28);
            if (cVar1 == '\0') {
              FUN_012f5a60("false","..\\common\\common\\game\\Player.cpp",0x3ef);
            }
            bVar2 = Deserializer_readInteger(stream,aiStack_14);
            iVar5 = extraout_EDX;
            if (!bVar2) {
              FUN_012f5a60("false","..\\common\\common\\game\\Player.cpp",0x3f2);
              iVar5 = extraout_EDX_00;
            }
            uVar9 = 0;
            pTVar8 = &Card::RTTI_Type_Descriptor;
            pTVar7 = &PlayElement::RTTI_Type_Descriptor;
            uVar6 = 0;
            pvVar4 = find_play_element_in_maps(*(void **)((int)this + 8),iVar5);
            iVar5 = FUN_00d8d382(pvVar4,uVar6,pTVar7,pTVar8,uVar9);
            *(int *)((int)this + 0x30) = iVar5;
            if (iVar5 == 0) {
              FUN_012f5a60("false","..\\common\\common\\game\\Player.cpp",0x3f5);
            }
            uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
            return (bool)uVar3;
          }
        }
      }
    }
  }
  return false;
}

