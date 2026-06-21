// addr: 0x00960af0
// name: ActorEmitterEvent_registerConstructors
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorEmitterEvent_registerConstructors(void * registry) */

void __thiscall ActorEmitterEvent_registerConstructors(void *this,void *registry)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  int *this_00;
  int *piVar8;
  int *piVar9;
  float10 fVar10;
  float fVar11;
  float in_stack_00000008;
  int in_stack_0000000c;
  int iStackY_80;
  float fStackY_7c;
  float fStackY_78;
  int *piStackY_74;
  int *piStackY_70;
  int *piStack_4c;
  float local_48;
  float local_44;
  void *local_40;
  float fStack_3c;
  float local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Builds/registers actor emitter event constructors for sound, light, camera
                       effect, particle, model material, and rumble event types. Evidence is the
                       ActorSoundEmitterEvent_ctor, ActorLightEmitterEvent_ctor,
                       ActorCameraEffectEvent_ctor, ActorParticleEmitterEvent_ctor,
                       ActorModelMaterialEvent_ctor, and ActorRumbleEffectEvent_ctor callees. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01595d32;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)registry + 0x14) == '\0') {
    local_40 = (void *)0x0;
  }
  else {
    local_40 = (void *)((int)registry + 0x20);
  }
  local_48 = *(float *)((int)registry + 0xc);
  if (local_48 <= 0.0) {
    local_48 = *(float *)(in_stack_0000000c + 0x2c);
  }
  if (local_48 < *(float *)(in_stack_0000000c + 0x28)) {
    local_48 = *(float *)(in_stack_0000000c + 0x28);
  }
  FUN_00769a30();
  FUN_007699f0();
  FUN_00769b30();
  FUN_00769b70();
  FUN_00769bb0();
  uVar4 = FUN_00769bf0();
  if ((*(int *)((int)this + 0x738) == 0) ||
     (bVar2 = true, *(void **)(*(int *)((int)this + 0x738) + 200) != this)) {
    bVar2 = false;
  }
  iVar1 = *(int *)(in_stack_0000000c + 0x34);
  do {
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return;
    }
    local_34 = *(float *)((int)registry + 8);
    local_44 = 0.0;
    if ((*(char *)(iVar1 + 0x28) == '\0') || (bVar2)) {
      switch(*(undefined4 *)(iVar1 + 0x10)) {
      case 0:
        iVar5 = FUN_00769a30();
        if (iVar5 != 0) {
          piStackY_70 = (int *)0x960c34;
          piVar6 = (int *)FUN_007c4050();
          if ((piVar6 != (int *)0x0) && (cVar3 = (**(code **)(*piVar6 + 8))(), cVar3 != '\0')) {
            piStackY_70 = (int *)0x960c59;
            pvVar7 = Mem_Alloc(0xb0);
            uStack_4 = 0;
            if (pvVar7 == (void *)0x0) goto LAB_00960f5c;
            fStackY_78 = *(float *)((int)this + 0x734);
            piStackY_70 = (int *)0x0;
            piStack_4c = &iStackY_80;
            fStackY_7c = in_stack_00000008;
            iStackY_80 = *(int *)registry;
            piStackY_74 = piVar6;
            this_00 = ActorParticleEmitterEvent_ctor(pvVar7);
            goto LAB_00960f5e;
          }
        }
        break;
      case 1:
        iVar5 = FUN_007699f0();
        if (iVar5 != 0) {
          piStackY_70 = (int *)0x960cc7;
          piVar6 = (int *)FUN_00709a70();
          if ((piVar6 != (int *)0x0) && (cVar3 = (**(code **)(*piVar6 + 8))(), cVar3 != '\0')) {
            piStackY_70 = (int *)0x960cec;
            pvVar7 = Mem_Alloc(0xb0);
            uStack_4 = 1;
            if (pvVar7 == (void *)0x0) goto LAB_00960f5c;
            piStackY_74 = *(int **)((int)this + 0x734);
            piStack_4c = (int *)&fStackY_7c;
            fStackY_78 = in_stack_00000008;
            fStackY_7c = *(float *)registry;
            iStackY_80 = 0x960d2f;
            piStackY_70 = piVar6;
            this_00 = ActorSoundEmitterEvent_ctor(pvVar7);
            goto LAB_00960f5e;
          }
        }
        break;
      case 2:
        piStackY_70 = (int *)0x960d49;
        piVar6 = (int *)FUN_007dd650();
        if ((piVar6 != (int *)0x0) && (cVar3 = (**(code **)(*piVar6 + 8))(), cVar3 != '\0')) {
          piStackY_70 = (int *)0x960d6e;
          pvVar7 = Mem_Alloc(0xb0);
          uStack_4 = 2;
          if (pvVar7 == (void *)0x0) {
LAB_00960f5c:
            this_00 = (int *)0x0;
          }
          else {
            piStackY_74 = *(int **)((int)this + 0x734);
            piStack_4c = (int *)&fStackY_7c;
            fStackY_78 = in_stack_00000008;
            fStackY_7c = *(float *)registry;
            iStackY_80 = 0x960db1;
            piStackY_70 = piVar6;
            this_00 = ActorModelMaterialEvent_ctor(pvVar7);
          }
LAB_00960f5e:
          uStack_4 = 0xffffffff;
          if (this_00 != (int *)0x0) {
            if (piVar6[7] != -1) {
              piStackY_70 = (int *)0x960f93;
              (**(code **)(**(int **)(*(int *)((int)this + 0x738) + 0x1ac) + 0x18))();
              piStackY_74 = (int *)0x960fb1;
              piStackY_70 = (int *)uVar4;
              (**(code **)(**(int **)(*(int *)((int)this + 0x738) + 0x1ac) + 0x1c))();
              piStackY_70 = piStack_4c;
              piStackY_74 = (int *)0x960fbe;
              FUN_010bd110();
              local_34 = (float)(int)piStack_4c;
            }
            *(undefined1 *)(this_00 + 0x10) = *(undefined1 *)((int)registry + 0x50);
            if (local_40 != (void *)0x0) {
              piStackY_70 = (int *)0x960fee;
              copyOptionalPlayerAppearanceBlock(this_00,local_40);
            }
            fStack_3c = 0.0;
            if ((0 < (int)*(int **)((int)registry + 0x10)) && (0 < *(int *)(iVar1 + 8))) {
              piStackY_74 = (int *)0x961017;
              piStackY_70 = *(int **)((int)registry + 0x10);
              (**(code **)(*(int *)this + 0x24))();
              piStackY_74 = (int *)0x96101e;
              fVar10 = (float10)FUN_00787e40();
              fStack_3c = (float)fVar10;
            }
            piStack_4c = (int *)0x0;
            if (0 < *(int *)(iVar1 + 0x20)) {
              do {
                fVar11 = *(float *)(*(int *)(iVar1 + 0x1c) + (int)piStack_4c * 8) + fStack_3c;
                iVar5 = *(int *)((int)this + 0x808);
                piVar9 = (int *)(1 << ((byte)*(undefined4 *)
                                              (*(int *)(iVar1 + 0x1c) + (int)piStack_4c * 8 + 4) &
                                      0x1f));
                piVar8 = (int *)this_00[10];
                if (piVar8 == (int *)0x0) {
                  cVar3 = (**(code **)(*this_00 + 0x18))();
                  if (cVar3 == '\0') {
                    piVar8 = *(int **)(iVar5 + 8);
                  }
                  else {
                    piVar8 = *(int **)(iVar5 + 4);
                  }
                }
                fStackY_78 = fVar11 + local_34;
                fStackY_7c = 1.3781308e-38;
                piStackY_74 = this_00;
                piStackY_70 = piVar9;
                (**(code **)(*piVar8 + 8))();
                if (((((uint)piVar9 & 4) != 0) ||
                    (cVar3 = (**(code **)(*piVar6 + 0x10))(), cVar3 == '\0')) && (local_44 < fVar11)
                   ) {
                  local_44 = fVar11;
                }
                piStack_4c = (int *)((int)piStack_4c + 1);
              } while ((int)piStack_4c < *(int *)(iVar1 + 0x20));
            }
            if ((0.0 < local_48) && ((local_44 <= 0.0 || (local_48 < local_44)))) {
              fVar11 = *(float *)((int)registry + 8);
              piVar8 = (int *)this_00[10];
              iVar5 = *(int *)((int)this + 0x808);
              if (piVar8 == (int *)0x0) {
                cVar3 = (**(code **)(*this_00 + 0x18))();
                if (cVar3 == '\0') {
                  piVar8 = *(int **)(iVar5 + 8);
                }
                else {
                  piVar8 = *(int **)(iVar5 + 4);
                }
              }
              piStackY_70 = (int *)&DAT_00000004;
              fStackY_7c = 1.3781549e-38;
              fStackY_78 = fVar11 + local_48;
              piStackY_74 = this_00;
              (**(code **)(*piVar8 + 8))();
            }
            cVar3 = (**(code **)(*piVar6 + 8))();
            if ((cVar3 != '\0') && (0 < piVar6[2])) {
              piVar6[2] = piVar6[2] + -1;
            }
          }
        }
        break;
      case 3:
        iVar5 = FUN_00769b70();
        if (iVar5 != 0) {
          piStackY_70 = (int *)0x960dd8;
          piVar6 = (int *)FUN_007dd5f0();
          if ((piVar6 != (int *)0x0) && (cVar3 = (**(code **)(*piVar6 + 8))(), cVar3 != '\0')) {
            piStackY_70 = (int *)0x960dfd;
            pvVar7 = Mem_Alloc(0xb0);
            uStack_4 = 3;
            if (pvVar7 == (void *)0x0) goto LAB_00960f5c;
            piStackY_74 = *(int **)((int)this + 0x734);
            piStack_4c = (int *)&fStackY_7c;
            fStackY_78 = in_stack_00000008;
            fStackY_7c = *(float *)registry;
            iStackY_80 = 0x960e40;
            piStackY_70 = piVar6;
            this_00 = ActorLightEmitterEvent_ctor(pvVar7);
            goto LAB_00960f5e;
          }
        }
        break;
      case 4:
        iVar5 = FUN_00769bb0();
        if (iVar5 != 0) {
          piStackY_70 = (int *)0x960e67;
          piVar6 = (int *)FUN_007dd6a0();
          if ((piVar6 != (int *)0x0) && (cVar3 = (**(code **)(*piVar6 + 8))(), cVar3 != '\0')) {
            piStackY_70 = (int *)0x960e8c;
            pvVar7 = Mem_Alloc(0xb0);
            uStack_4 = 4;
            if (pvVar7 == (void *)0x0) goto LAB_00960f5c;
            piStackY_74 = *(int **)((int)this + 0x734);
            piStack_4c = (int *)&fStackY_7c;
            fStackY_78 = in_stack_00000008;
            fStackY_7c = *(float *)registry;
            iStackY_80 = 0x960ecf;
            piStackY_70 = piVar6;
            this_00 = ActorCameraEffectEvent_ctor(pvVar7);
            goto LAB_00960f5e;
          }
        }
        break;
      case 8:
        iVar5 = FUN_00769bf0();
        if (iVar5 != 0) {
          piStackY_70 = (int *)0x960ef6;
          piVar6 = (int *)FUN_008beba0();
          if ((piVar6 != (int *)0x0) && (cVar3 = (**(code **)(*piVar6 + 8))(), cVar3 != '\0')) {
            piStackY_70 = (int *)0x960f1b;
            pvVar7 = Mem_Alloc(0xb0);
            uStack_4 = 5;
            if (pvVar7 == (void *)0x0) goto LAB_00960f5c;
            piStackY_74 = *(int **)((int)this + 0x734);
            piStack_4c = (int *)&fStackY_7c;
            fStackY_78 = in_stack_00000008;
            fStackY_7c = *(float *)registry;
            iStackY_80 = 0x960f5a;
            piStackY_70 = piVar6;
            this_00 = ActorRumbleEffectEvent_ctor(pvVar7);
            goto LAB_00960f5e;
          }
        }
      }
    }
    iVar1 = *(int *)(iVar1 + 0x2c);
  } while( true );
}

