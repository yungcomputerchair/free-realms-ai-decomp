// addr: 0x0042a085
// name: RenderResource_updateChildDirtyRegions
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool RenderResource_updateChildDirtyRegions(void * this, bool recurse_, int
   flags_) */

bool __thiscall RenderResource_updateChildDirtyRegions(void *this,bool recurse_,int flags_)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  void *pvVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 local_c8 [28];
  undefined1 local_ac [28];
  undefined1 local_90 [28];
  undefined1 local_74 [28];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_14;
  char local_d;
  uint local_c;
  void *local_8;
  
                    /* Walks child render resources, updates auxiliary surfaces, intersects/clips
                       dirty RectRegions, subdivides very large dirty areas, and recursively updates
                       child regions. */
  if (*(int *)((int)this + 0x4c) != 0) {
    local_14 = this;
    local_44 = (int *)FUN_00419c2b();
    if ((local_44 == (int *)0x0) ||
       ((*(int *)((int)this + 0xe4) == 0 &&
        (iVar3 = RenderResource_updateAuxiliarySurfaces(this,'\x01'), (char)iVar3 == '\0')))) {
      return false;
    }
    local_38 = *(int *)((int)this + 0x70) + -1;
    local_34 = *(int *)((int)this + 0x74) + -1;
    local_40 = 0;
    local_3c = 0;
    FUN_004c9ed9(&local_40);
    pvVar1 = *(void **)(*(int *)((int)this + 0xe4) + 0x10);
    if (pvVar1 != (void *)0x0) {
      RectRegion_intersectWithRegion(local_90,pvVar1,0);
    }
    local_30 = 0;
    local_48 = FUN_0040a782();
    local_d = '\0';
    if (local_48 != 0) {
      do {
        puVar4 = (undefined4 *)FUN_0040a795(local_30);
        pvVar1 = (void *)*puVar4;
        if ((*(int *)((int)pvVar1 + 0xe4) != 0) ||
           (iVar3 = RenderResource_updateAuxiliarySurfaces(pvVar1,*(int *)((int)pvVar1 + 0x4c) != 0)
           , (char)iVar3 != '\0')) {
          FUN_0040f723(&local_24,(int)this + 0x24);
          local_2c = local_24;
          local_28 = local_20;
          cVar2 = RectRegion_classifyRectCoverage(local_90,&local_24);
          local_c = CONCAT31(extraout_var,cVar2);
          if ((*(uint *)((int)pvVar1 + 0x60) & 8) == 0) {
            if (local_c != 0) {
              if ((((*(int *)((int)this + 0xa0) < local_20) ||
                   (local_18 < *(int *)((int)this + 0x98))) ||
                  (local_1c < *(int *)((int)this + 0x94))) ||
                 (*(int *)((int)this + 0x9c) < local_24)) {
                local_c = 0;
              }
              else if (((*(int *)((int)this + 0x9c) < local_1c) ||
                       (*(int *)((int)this + 0xa0) < local_18)) ||
                      ((local_24 < *(int *)((int)this + 0x94) ||
                       (local_20 < *(int *)((int)this + 0x98))))) {
                local_c = 2;
              }
            }
            if (local_24 < *(int *)((int)this + 0x94)) {
              local_24 = *(int *)((int)this + 0x94);
            }
            if (local_20 < *(int *)((int)this + 0x98)) {
              local_20 = *(int *)((int)this + 0x98);
            }
            if (*(int *)((int)this + 0x9c) < local_1c) {
              local_1c = *(int *)((int)this + 0x9c);
            }
            if (*(int *)((int)this + 0xa0) < local_18) {
              local_18 = *(int *)((int)this + 0xa0);
            }
          }
          local_8 = (void *)0x0;
          if (local_c == 0) {
            pvVar5 = Mem_Alloc(0x1c);
            if (pvVar5 == (void *)0x0) goto LAB_0042a297;
            local_8 = (void *)FUN_004c9ebe();
          }
          else if (local_c == 1) {
LAB_0042a297:
            local_8 = (void *)0x0;
          }
          else if (local_c == 2) {
            pvVar5 = Mem_Alloc(0x1c);
            if (pvVar5 == (void *)0x0) {
              local_8 = (void *)0x0;
            }
            else {
              local_c = FUN_004dbcb6(local_90);
              FUN_004f75b5(&local_24,0);
              FUN_004dbcb6(local_c);
              FUN_004c9f6e();
              local_8 = pvVar5;
            }
            FUN_004ca149(-local_2c,-local_28);
          }
          iVar3 = *(int *)((int)pvVar1 + 0xb8);
          if (iVar3 != 0) {
            if (local_8 == (void *)0x0) {
              pvVar5 = Mem_Alloc(0x1c);
              if (pvVar5 == (void *)0x0) {
                local_8 = (void *)0x0;
              }
              else {
                local_58 = local_24 + -local_2c;
                local_50 = -local_2c + local_1c;
                local_54 = local_20 + -local_28;
                local_4c = -local_28 + local_18;
                local_8 = (void *)FUN_004c9ed9(&local_58);
                this = local_14;
              }
              if (local_8 == (void *)0x0) goto LAB_0042a312;
              iVar3 = *(int *)((int)pvVar1 + 0xb8);
            }
            FUN_004e824b(iVar3 + 0x1c,0);
          }
LAB_0042a312:
          if (((local_24 <= local_1c + 1) && (local_20 <= local_18 + 1)) &&
             (this = local_14, 30000 < ((local_18 - local_20) + 1) * ((local_1c - local_24) + 1))) {
            iVar3 = *(int *)((int)pvVar1 + 0xb8);
            uVar6 = *(uint *)((int)pvVar1 + 0x60) & 0x4000000;
            if (iVar3 == 0) {
              if (uVar6 == 0) {
                FUN_004e82d7(&local_24,0);
                this = local_14;
              }
            }
            else {
              if (uVar6 == 0) {
                FUN_004c9ed9(&local_24);
                iVar3 = *(int *)((int)pvVar1 + 0xb8);
                uVar7 = FUN_004dbcb6(iVar3 + 0x1c);
                FUN_004e8134(iVar3 + 0x38,0);
                FUN_004dbcb6(uVar7);
                FUN_004c9f6e();
                uVar7 = FUN_004dbcb6(local_ac);
                FUN_004ca149(local_2c,local_28);
                FUN_004dbcb6(uVar7);
                FUN_004c9f6e();
                FUN_004e824b(local_c8,0);
                FUN_004c9f6e();
                FUN_004c9f6e();
                uVar6 = FUN_004ca3d2();
                if (30000 < uVar6) {
                  local_3c = 0;
                  local_38 = 0;
                  local_34 = 0;
                  FUN_00524670(&local_40,0);
                  for (local_c = 0; (local_3c != 0 && (local_c < (uint)(local_38 - local_3c >> 4)));
                      local_c = local_c + 1) {
                    piVar8 = (int *)FUN_00409f40(local_c);
                    if (30000 < ((piVar8[3] - piVar8[1]) + 1) * ((piVar8[2] - *piVar8) + 1)) {
                      uVar7 = FUN_00409f40(local_c);
                      FUN_004e82d7(uVar7,0);
                    }
                  }
                  FUN_0042215d();
                }
              }
              else {
                if ((*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x10)) *
                    (*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0xc)) < 0x7531) goto LAB_0042a4eb;
                uVar7 = FUN_004dbcb6(iVar3);
                FUN_004ca149(local_2c,local_28);
                FUN_004dbcb6(uVar7);
                FUN_004c9f6e();
                FUN_004e824b(local_74,0);
              }
              FUN_004c9f6e();
              this = local_14;
            }
          }
LAB_0042a4eb:
          if ((flags_ != 0) && (local_d == '\0')) {
            if (pvVar1 != (void *)flags_) {
              if (local_8 != (void *)0x0) {
                FUN_004c9f6e();
                    /* WARNING: Subroutine does not return */
                _free(local_8);
              }
              goto LAB_0042a5ba;
            }
            local_d = '\x01';
          }
          iVar3 = *(int *)((int)pvVar1 + 0xe4);
          cVar2 = *(char *)(iVar3 + 0x14);
          if (local_8 == (void *)0x0) {
            if (*(int *)(iVar3 + 0x10) != 0) goto LAB_0042a539;
          }
          else {
            if ((*(int *)(iVar3 + 0x10) != 0) &&
               (cVar2 = FUN_004ca302(*(int *)(iVar3 + 0x10)), cVar2 != '\0')) {
              FUN_004c9f6e();
                    /* WARNING: Subroutine does not return */
              _free(local_8);
            }
LAB_0042a539:
            pvVar5 = *(void **)(*(int *)((int)pvVar1 + 0xe4) + 0x10);
            cVar2 = '\x01';
            if (pvVar5 != (void *)0x0) {
              FUN_004c9f6e();
                    /* WARNING: Subroutine does not return */
              _free(pvVar5);
            }
            *(void **)(*(int *)((int)pvVar1 + 0xe4) + 0x10) = local_8;
            this = local_14;
          }
          *(undefined1 *)(*(int *)((int)pvVar1 + 0xe4) + 0x14) = 0;
          if ((recurse_) && (cVar2 != '\0')) {
            RenderResource_updateChildDirtyRegions(pvVar1,true,0);
          }
          (**(code **)(*local_44 + 0xb0))
                    (*(undefined4 *)(*(int *)((int)pvVar1 + 0xe4) + 8),
                     *(undefined4 *)(*(int *)((int)pvVar1 + 0xe4) + 0x10));
          iVar3 = *(int *)((int)pvVar1 + 0xe4);
          if (*(int *)(iVar3 + 0xc) != 0) {
            (**(code **)(*local_44 + 0xb0))
                      (*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10));
          }
        }
LAB_0042a5ba:
        local_30 = local_30 + 1;
      } while (local_30 < local_48);
    }
    FUN_004c9f6e();
  }
  return true;
}

