// addr: 0x01434ba0
// name: PlayElement_deserializeCardSubtype
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall PlayElement_deserializeCardSubtype(int *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  void *pvVar4;
  int iVar5;
  undefined3 extraout_var_02;
  int elementId_;
  int elementId__00;
  int unaff_EDI;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  undefined4 uVar9;
  int *piStack_18;
  int local_4;
  
                    /* Deserializes a PlayElement-derived object: reads an integer, deserializes
                       base PlayElement fields, and uses RTTI/dynamic-cast style checks around the
                       resulting object. Exact subclass is unknown. */
  piStack_18 = &local_4;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_2);
  if ((char)uVar3 != '\0') {
    bVar2 = PlayElement_deserialize(param_1,param_2);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(param_2,&local_4);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2) {
        pcVar1 = *(code **)(param_1[0x11] + 0x24);
        param_1[0x10] = local_4;
        uVar3 = (*pcVar1)(param_2);
        if ((char)uVar3 != '\0') {
          bVar2 = Deserializer_readInteger(param_2,(int *)&piStack_18);
          uVar3 = CONCAT31(extraout_var_01,bVar2);
          if (bVar2) {
            if (piStack_18 != (int *)0x0) {
              uVar9 = 0;
              pTVar8 = &Card::RTTI_Type_Descriptor;
              pTVar7 = &PlayElement::RTTI_Type_Descriptor;
              uVar6 = 0;
              pvVar4 = find_play_element_in_maps((void *)param_1[10],elementId_);
              iVar5 = FUN_00d8d382(pvVar4,uVar6,pTVar7,pTVar8,uVar9);
              param_1[0x14] = iVar5;
              uVar3 = 0;
              if (iVar5 == 0) goto LAB_01434bbe;
            }
            bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xffffffec);
            uVar3 = CONCAT31(extraout_var_02,bVar2);
            if (bVar2) {
              if (unaff_EDI != 0) {
                uVar9 = 0;
                pTVar8 = &Card::RTTI_Type_Descriptor;
                pTVar7 = &PlayElement::RTTI_Type_Descriptor;
                uVar6 = 0;
                pvVar4 = find_play_element_in_maps((void *)param_1[10],elementId__00);
                iVar5 = FUN_00d8d382(pvVar4,uVar6,pTVar7,pTVar8,uVar9);
                param_1[0x15] = iVar5;
                uVar3 = 0;
                if (iVar5 == 0) goto LAB_01434bbe;
              }
              uVar3 = (**(code **)(*param_1 + 0x14))(param_2);
              return uVar3;
            }
          }
        }
      }
    }
  }
LAB_01434bbe:
  return uVar3 & 0xffffff00;
}

