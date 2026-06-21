// addr: 0x00aed140
// name: FUN_00aed140
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00aed140(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  uint key_;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 extraout_EAX;
  undefined4 *puVar6;
  float10 fVar7;
  float fVar8;
  int local_68;
  int local_60;
  float local_5c;
  int local_58;
  float local_50;
  undefined4 *local_4c;
  float local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Builds/interpolates curve/vector point data between two inputs, allocating
                       curve point arrays and applying clamped interpolation values. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_015ccaa7;
  local_1c = ExceptionList;
  key_ = DAT_01b839d8 ^ (uint)&stack0xffffff80;
  if (*(int *)(param_2 + 8) == *(int *)(param_3 + 8)) {
    ExceptionList = &local_1c;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    local_68 = 0;
    if (0 < *(int *)(param_2 + 8)) {
      do {
        iVar3 = *(int *)(param_2 + 8);
        if (((iVar3 <= local_68) && (iVar2 = local_68 + 1, iVar3 < iVar2)) && (iVar3 <= local_68)) {
          if (*(int *)(param_2 + 0xc) < iVar2) {
            FUN_00738f90(iVar2,0);
          }
          *(int *)(param_2 + 8) = iVar2;
        }
        iVar2 = lookup_hash64_bucket_node
                          (*(void **)(*(int *)(param_1 + 0x74) + 0x224),
                           *(int *)(*(int *)(param_2 + 4) + local_68 * 4),key_);
        iVar3 = *(int *)(param_3 + 8);
        if (((iVar3 <= local_68) && (iVar5 = local_68 + 1, iVar3 < iVar5)) && (iVar3 <= local_68)) {
          if (*(int *)(param_3 + 0xc) < iVar5) {
            FUN_00738f90(iVar5,0);
          }
          *(int *)(param_3 + 8) = iVar5;
        }
        iVar3 = lookup_hash64_bucket_node
                          (*(void **)(*(int *)(param_1 + 0x74) + 0x224),
                           *(int *)(*(int *)(param_3 + 4) + local_68 * 4),key_);
        if ((iVar2 != 0) && (iVar3 != 0)) {
          pvVar4 = Mem_Alloc(0x24);
          local_14 = 0;
          if (pvVar4 == (void *)0x0) {
            local_58 = 0;
          }
          else {
            local_58 = GameUtil_CurveVector4PointArray_init(2);
          }
          local_14 = 0xffffffff;
          iVar5 = *(int *)(param_1 + 0x1b4);
          if (((iVar5 <= local_68) && (iVar5 < local_68 + 1)) && (iVar5 <= local_68)) {
            iVar5 = local_68 + 1;
            if (*(int *)(param_1 + 0x1b8) < iVar5) {
              FUN_00aec5f0(iVar5,0);
            }
            *(int *)(param_1 + 0x1b4) = iVar5;
          }
          fVar8 = 0.0;
          *(int *)(local_68 * 4 + *(int *)(param_1 + 0x1b0)) = local_58;
          iVar5 = *(int *)(iVar2 + 0x18);
          local_4c = (undefined4 *)0x0;
          if (0 < iVar5) {
            local_58 = 0;
            do {
              if (((-1 < (int)local_4c) && ((int)local_4c < iVar5)) &&
                 (puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x14) + local_58),
                 puVar6 != (undefined4 *)0x0)) {
                local_50 = (float)puVar6[4];
                if (0 < (int)local_4c) {
                  local_50 = (local_50 + fVar8) * DAT_017649d4;
                }
                iVar5 = *(int *)(param_1 + 0x1b4);
                local_30 = *puVar6;
                local_2c = puVar6[1];
                local_28 = puVar6[2];
                local_24 = puVar6[3];
                if (((iVar5 <= local_68) && (iVar5 < local_68 + 1)) && (iVar5 <= local_68)) {
                  iVar5 = local_68 + 1;
                  if (*(int *)(param_1 + 0x1b8) < iVar5) {
                    FUN_00aec5f0(iVar5,0);
                  }
                  *(int *)(param_1 + 0x1b4) = iVar5;
                }
                FUN_00aed060(0xffffffff,local_50,&local_30);
                fVar8 = (float)puVar6[4];
              }
              iVar5 = *(int *)(iVar2 + 0x18);
              local_58 = local_58 + 0x14;
              local_4c = (undefined4 *)((int)local_4c + 1);
            } while ((int)local_4c < iVar5);
          }
          local_4c = Mem_Alloc(0x24);
          if (local_4c == (undefined4 *)0x0) {
            local_4c = (undefined4 *)0x0;
          }
          else {
            *local_4c = 0;
            local_4c[1] = SoeUtil::
                          Array<GameUtil::Curve<SoeUtil::Math::Vector<float,4>_>::Point,0,1>::
                          vftable;
            local_4c[2] = 0;
            local_4c[3] = 0;
            local_4c[4] = 0;
            local_4c[5] = SoeUtil::
                          Array<GameUtil::Curve<SoeUtil::Math::Vector<float,4>_>::Segment,0,1>::
                          vftable;
            local_4c[6] = 0;
            local_4c[7] = 0;
            local_4c[8] = 0;
            local_14._1_3_ = 0;
            local_14._0_1_ = 3;
            pvVar4 = Mem_Alloc(0x3c);
            local_14 = CONCAT31(local_14._1_3_,5);
            if (pvVar4 == (void *)0x0) {
              *local_4c = 0;
            }
            else {
              GameUtil_CurveNaturalCubicSpline_Vector4f_ctor(pvVar4,local_4c);
              *local_4c = extraout_EAX;
            }
          }
          local_14 = 0xffffffff;
          iVar2 = *(int *)(param_1 + 0x1c4);
          if (((iVar2 <= local_68) && (iVar5 = local_68 + 1, iVar2 < iVar5)) && (iVar2 <= local_68))
          {
            if (*(int *)(param_1 + 0x1c8) < iVar5) {
              FUN_00aec5f0(iVar5,0);
            }
            *(int *)(param_1 + 0x1c4) = iVar5;
          }
          fVar8 = 0.0;
          *(undefined4 **)(local_68 * 4 + *(int *)(param_1 + 0x1c0)) = local_4c;
          iVar2 = *(int *)(iVar3 + 0x18);
          local_58 = 0;
          if (0 < iVar2) {
            local_60 = 0;
            do {
              if (((-1 < local_58) && (local_58 < iVar2)) &&
                 (puVar6 = (undefined4 *)(*(int *)(iVar3 + 0x14) + local_60),
                 puVar6 != (undefined4 *)0x0)) {
                local_48 = (float)puVar6[4];
                if (0 < local_58) {
                  local_48 = (local_48 + fVar8) * DAT_017649d4;
                }
                local_40 = *puVar6;
                iVar2 = *(int *)(param_1 + 0x1c4);
                local_3c = puVar6[1];
                local_38 = puVar6[2];
                local_34 = puVar6[3];
                if (((iVar2 <= local_68) && (iVar2 < local_68 + 1)) && (iVar2 <= local_68)) {
                  iVar2 = local_68 + 1;
                  if (*(int *)(param_1 + 0x1c8) < iVar2) {
                    FUN_00aec5f0(iVar2,0);
                  }
                  *(int *)(param_1 + 0x1c4) = iVar2;
                }
                piVar1 = *(int **)(local_68 * 4 + *(int *)(param_1 + 0x1c0));
                iVar5 = piVar1[3];
                iVar2 = iVar5 + -1;
                if ((iVar2 < 0) || (iVar5 <= iVar2)) {
                  local_5c = 0.0;
                }
                else {
                  local_5c = *(float *)(iVar2 * 0x20 + 4 + piVar1[2]);
                }
                if (0 < iVar5) {
                  fVar8 = DAT_017ebbb8;
                  if ((int *)*piVar1 != (int *)0x0) {
                    fVar7 = (float10)(**(code **)(*(int *)*piVar1 + 0x1c))(iVar2,&local_40);
                    fVar8 = DAT_017ebbb8;
                    if (DAT_01762a30 < (float)fVar7) {
                      fVar8 = (float)fVar7 / local_48;
                    }
                  }
                  local_5c = fVar8 + local_5c;
                }
                iVar2 = FUN_007daeb0(iVar5,1);
                *(float *)(iVar2 + 4) = local_5c;
                *(undefined4 *)(iVar2 + 0x10) = local_40;
                *(undefined4 *)(iVar2 + 0x14) = local_3c;
                *(undefined4 *)(iVar2 + 0x18) = local_38;
                *(undefined4 *)(iVar2 + 0x1c) = local_34;
                if ((int *)*piVar1 != (int *)0x0) {
                  (**(code **)(*(int *)*piVar1 + 0x20))();
                }
                fVar8 = (float)puVar6[4];
              }
              iVar2 = *(int *)(iVar3 + 0x18);
              local_60 = local_60 + 0x14;
              local_58 = local_58 + 1;
            } while (local_58 < iVar2);
          }
        }
        if ((*(int *)(param_1 + 0x1b4) < 1) && (*(int *)(param_1 + 0x1b4) < 1)) {
          if (*(int *)(param_1 + 0x1b8) < 1) {
            FUN_00aec5f0(1,0);
          }
          *(undefined4 *)(param_1 + 0x1b4) = 1;
        }
        if (*(int **)**(undefined4 **)(param_1 + 0x1b0) == (int *)0x0) {
          fVar8 = 0.0;
        }
        else {
          fVar7 = (float10)(**(code **)(**(int **)**(undefined4 **)(param_1 + 0x1b0) + 0x30))();
          fVar8 = (float)fVar7;
        }
        *(float *)(param_1 + 0x1cc) = fVar8;
        *(undefined4 *)(param_1 + 0x1a4) = param_4;
        *(undefined4 *)(param_1 + 0x1d0) = 0;
        FUN_00aece10(0);
        local_68 = local_68 + 1;
      } while (local_68 < *(int *)(param_2 + 8));
    }
    if (*(int *)(param_1 + 0x1c4) == 0) {
      *(undefined1 *)(param_1 + 0x240) = 1;
    }
    ExceptionList = local_1c;
    return 1;
  }
  return 0;
}

