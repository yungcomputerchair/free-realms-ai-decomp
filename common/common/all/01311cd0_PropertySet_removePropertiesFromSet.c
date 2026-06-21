// addr: 0x01311cd0
// name: PropertySet_removePropertiesFromSet
// subsystem: common/common/all
// source (binary assert): common/common/all/PropertySet.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PropertySet_removePropertiesFromSet(void * this, void * sourceSet) */

bool __thiscall PropertySet_removePropertiesFromSet(void *this,void *sourceSet)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int propertyId_;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int iVar7;
  int extraout_EDX_10;
  undefined4 uVar8;
  bool local_1d;
  int local_10;
  undefined4 *local_c;
  void *local_8;
  int local_4;
  
                    /* Iterates all properties in sourceSet and removes or clears matching entries
                       in this PropertySet, asserting that each underlying remove succeeds. */
  puVar1 = *(undefined4 **)((int)sourceSet + 8);
  local_c = (undefined4 *)*puVar1;
  local_1d = false;
  local_10 = (int)sourceSet + 4;
  do {
    puVar2 = local_c;
    iVar7 = local_10;
    if ((local_10 == 0) || (local_10 != (int)sourceSet + 4)) {
      FUN_00d83c2d();
    }
    if (puVar2 == puVar1) {
      return local_1d;
    }
    if (iVar7 == 0) {
      FUN_00d83c2d();
    }
    if (puVar2 == *(undefined4 **)(iVar7 + 4)) {
      FUN_00d83c2d();
    }
    RBTreeInt_lowerBound((void *)((int)this + 4),&local_8,puVar2 + 3);
    pvVar3 = local_8;
    iVar7 = *(int *)((int)this + 8);
    if ((local_8 == (void *)0x0) || (propertyId_ = extraout_EDX, local_8 != (void *)((int)this + 4))
       ) {
      FUN_00d83c2d();
      propertyId_ = extraout_EDX_00;
    }
    iVar4 = local_4;
    if (local_4 == iVar7) {
LAB_01311e76:
      local_1d = true;
    }
    else {
      if (pvVar3 == (void *)0x0) {
        FUN_00d83c2d();
        propertyId_ = extraout_EDX_01;
      }
      if (iVar4 == *(int *)((int)pvVar3 + 4)) {
        FUN_00d83c2d();
        propertyId_ = extraout_EDX_02;
      }
      iVar7 = local_10;
      if (*(int *)(iVar4 + 0x10) != 0) {
LAB_01311dc8:
        if (iVar4 == *(int *)((int)pvVar3 + 4)) {
          FUN_00d83c2d();
        }
        if (*(int *)(iVar4 + 0x10) != 0) {
          if (puVar2 == *(undefined4 **)(iVar7 + 4)) {
            FUN_00d83c2d();
          }
          if (puVar2[4] != 0) {
            if (puVar2 == *(undefined4 **)(iVar7 + 4)) {
              FUN_00d83c2d();
            }
            if (iVar4 == *(int *)((int)pvVar3 + 4)) {
              FUN_00d83c2d();
            }
            cVar6 = FUN_012fe9b0(puVar2[4],1);
            if (cVar6 != '\0') {
              iVar7 = extraout_EDX_05;
              if (iVar4 == *(int *)((int)pvVar3 + 4)) {
                FUN_00d83c2d();
                iVar7 = extraout_EDX_06;
              }
              if (*(int *)(iVar4 + 0x10) != 0) {
                if (iVar4 == *(int *)((int)pvVar3 + 4)) {
                  FUN_00d83c2d();
                  iVar7 = extraout_EDX_07;
                }
                if (*(undefined4 **)(iVar4 + 0x10) != (undefined4 *)0x0) {
                  (**(code **)**(undefined4 **)(iVar4 + 0x10))(1);
                  iVar7 = extraout_EDX_08;
                }
                if (iVar4 == *(int *)((int)pvVar3 + 4)) {
                  FUN_00d83c2d();
                  iVar7 = extraout_EDX_09;
                }
                *(undefined4 *)(iVar4 + 0x10) = 0;
              }
              if (iVar4 == *(int *)((int)pvVar3 + 4)) {
                FUN_00d83c2d();
                iVar7 = extraout_EDX_10;
              }
              bVar5 = PropertySet_removeProperty(this,iVar7);
              if (!bVar5) {
                uVar8 = 0x67;
                goto LAB_01311db1;
              }
              goto LAB_01311e7b;
            }
          }
        }
        goto LAB_01311e76;
      }
      if (puVar2 == *(undefined4 **)(local_10 + 4)) {
        FUN_00d83c2d();
        propertyId_ = extraout_EDX_03;
      }
      if (puVar2[4] != 0) goto LAB_01311dc8;
      if (iVar4 == *(int *)((int)pvVar3 + 4)) {
        FUN_00d83c2d();
        propertyId_ = extraout_EDX_04;
      }
      bVar5 = PropertySet_removeProperty(this,propertyId_);
      if (!bVar5) {
        uVar8 = 0x59;
LAB_01311db1:
        FUN_012f5a60("bResult","..\\common\\common\\all\\PropertySet.cpp",uVar8);
      }
    }
LAB_01311e7b:
    RBTreeIterator_increment(&local_10);
  } while( true );
}

