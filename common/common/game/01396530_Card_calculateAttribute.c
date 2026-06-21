// addr: 0x01396530
// name: Card_calculateAttribute
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Card_calculateAttribute(void * this, void * environment, int attributeID_,
   bool * outModified, int context_, bool clampNonNegative_) */

int __thiscall
Card_calculateAttribute
          (void *this,void *environment,int attributeID_,bool *outModified,int context_,
          bool clampNonNegative_)

{
  rsize_t _DstSize;
  int *piVar1;
  bool *pbVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 *puVar11;
  int *piVar12;
  bool *env;
  undefined4 unaff_retaddr;
  char *fmt;
  int iVar13;
  char cVar14;
  int iStack_74;
  bool *pbStack_70;
  int *piStack_6c;
  int iStack_68;
  bool *pbStack_64;
  undefined4 *puStack_60;
  void *pvStack_5c;
  int *piStack_58;
  void *pvStack_54;
  int *piStack_50;
  int iStack_4c;
  bool *pbStack_48;
  undefined4 *puStack_44;
  int iStack_3c;
  int local_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  bool *pbStack_4;
  
  env = environment;
                    /* Calculates a card attribute starting from base data and applying active
                       AttributeModifier objects. It tracks modifier sources, updates change flags,
                       and can clamp negative results to zero. */
  pbStack_4 = (bool *)0xffffffff;
  puStack_8 = &LAB_01684850;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (environment == (void *)0x0) {
    FUN_012f5a60("environment","..\\common\\common\\game\\Card.cpp",0x3e0,
                 DAT_01b839d8 ^ (uint)&stack0xffffff7c);
  }
  FUN_012fa910();
  pbStack_4 = (bool *)0x0;
  pbStack_70 = outModified;
  outModified = (bool *)((uint)outModified & 0xffffff00);
  iStack_68 = 0;
  pvVar6 = (void *)FUN_01340340();
  bVar3 = Game_shouldLogAttributeModifierDebug(pvVar6);
  iVar8 = attributeID_;
  if (bVar3) {
    if (*(uint *)((int)this + 0x13c) < 0x10) {
      iVar7 = (int)this + 0x128;
    }
    else {
      iVar7 = *(int *)((int)this + 0x128);
    }
    fmt = "Calculating attribute %d on card %s";
    iVar13 = attributeID_;
    pvVar6 = (void *)FUN_01340340("Calculating attribute %d on card %s",attributeID_,iVar7);
    Game_logGeneral(pvVar6,fmt,iVar13);
  }
  cVar4 = (**(code **)(*(int *)this + 4))(iVar8,local_38);
  if ((cVar4 != '\0') && (iStack_3c == 2)) {
    unaff_EBX = local_38[0];
  }
  cVar4 = (**(code **)(*(int *)this + 0x48))();
  if (((cVar4 == '\x01') ||
      (bVar3 = Card_containsAttributeId(*(void **)((int)this + 0x30),(int)this), bVar3)) ||
     (cVar4 = (**(code **)(*(int *)this + 0x50))(), cVar4 != '\0')) {
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    local_c = (void *)CONCAT31((int3)((uint)local_c >> 8),2);
    (**(code **)(*(int *)this + 0x214))(iVar8,&pbStack_70);
    puStack_60 = *(undefined4 **)(pbStack_70 + 8);
    pbStack_64 = pbStack_70;
    if (puStack_60 < *(undefined4 **)(pbStack_70 + 4)) {
      FUN_00d83c2d();
    }
    pbVar2 = pbStack_70;
    puVar11 = *(undefined4 **)(pbStack_70 + 4);
    if (*(undefined4 **)(pbStack_70 + 8) < puVar11) {
      FUN_00d83c2d();
    }
    pbStack_48 = pbVar2;
    puStack_44 = puVar11;
    while( true ) {
      puVar11 = puStack_44;
      pbVar2 = pbStack_48;
      if ((pbStack_48 == (bool *)0x0) || (pbStack_48 != pbStack_64)) {
        FUN_00d83c2d();
      }
      if (puVar11 == puStack_60) break;
      if (pbVar2 == (bool *)0x0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(pbVar2 + 8) <= puVar11) {
        FUN_00d83c2d();
      }
      piVar12 = (int *)*puVar11;
      iStack_74 = 0;
      piStack_6c = piVar12;
      pvStack_5c = EvaluationEnvironment_getOriginCard(env);
      pvStack_54 = EvaluationEnvironment_getMember14(env);
      set_play_element_id_field(env,this);
      pvVar6 = EvaluationEnvironment_getMember14(env);
      if ((pvVar6 == (void *)0x0) && (iVar8 = FUN_01418e00(), iVar8 != 0)) {
        piVar9 = (int *)FUN_01418e00();
        iVar8 = (**(code **)(*piVar9 + 0x28))();
        pvVar6 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x30),iVar8);
        FUN_013815b0(pvVar6);
      }
      iVar8 = FUN_01418e00();
      if ((iVar8 != 0) && (*(char *)(*(int *)((int)this + 0x30) + 0x22c) != '\0')) {
        iStack_68 = FUN_01418e00();
        if (*(uint *)(iStack_68 + 0x13c) < 0x10) {
          iStack_68 = iStack_68 + 0x128;
        }
        else {
          iStack_68 = *(int *)(iStack_68 + 0x128);
        }
        if (*(uint *)((int)this + 0x13c) < 0x10) {
          iVar8 = (int)this + 0x128;
        }
        else {
          iVar8 = *(int *)((int)this + 0x128);
        }
        FUN_01418e00();
        uVar10 = PlayElement_getId();
        PlayElement_getId(iStack_68,uVar10);
        Game_logGeneral(*(void **)((int)this + 0x30),
                        "Checking Dynamic Modifier on card: %s(%d) from card: %s(%d)",iVar8);
      }
      cVar4 = (**(code **)(*piVar12 + 0x44))(env,&iStack_74,&stack0xffffff86);
      set_play_element_id_field(env,pvStack_5c);
      FUN_013815b0(pvStack_54);
      cVar14 = (char)((uint)unaff_EBP >> 0x10);
      if ((cVar4 != '\0') || (piVar12 = piStack_6c, env = pbStack_4, cVar14 != '\0')) {
        cVar5 = (**(code **)(*(int *)this + 0x230))(piVar12,env);
        if ((cVar5 == '\0') && (0 < iStack_74)) {
          environment = (void *)PlayElement_getId();
          piVar12 = *(int **)((int)this + 0xe4);
          if (piVar12 < *(int **)((int)this + 0xe0)) {
            FUN_00d83c2d();
          }
          piVar9 = *(int **)((int)this + 0xe0);
          piVar1 = piVar9;
          if (*(int **)((int)this + 0xe4) < piVar9) {
            FUN_00d83c2d();
          }
          for (; (piVar1 != piVar12 && ((void *)*piVar1 != environment)); piVar1 = piVar1 + 1) {
          }
          piVar12 = *(int **)((int)this + 0xe4);
          piStack_50 = piVar9;
          if (piVar12 < *(int **)((int)this + 0xe0)) {
            FUN_00d83c2d();
          }
          if (this == (void *)0xffffff24) {
            FUN_00d83c2d();
          }
          if (piVar1 == piVar12) {
            environment = (void *)PlayElement_getId();
            FUN_0042c155(&environment);
          }
        }
        else {
          pvStack_54 = (void *)PlayElement_getId();
          piVar12 = *(int **)((int)this + 0xe4);
          if (piVar12 < *(int **)((int)this + 0xe0)) {
            FUN_00d83c2d();
          }
          piVar9 = *(int **)((int)this + 0xe0);
          piVar1 = piVar9;
          if (*(int **)((int)this + 0xe4) < piVar9) {
            FUN_00d83c2d();
          }
          for (; (piVar1 != piVar12 && ((void *)*piVar1 != pvStack_54)); piVar1 = piVar1 + 1) {
          }
          piVar12 = *(int **)((int)this + 0xe4);
          piStack_58 = piVar9;
          if (piVar12 < *(int **)((int)this + 0xe0)) {
            FUN_00d83c2d();
          }
          if (this == (void *)0xffffff24) {
            FUN_00d83c2d();
          }
          if (piVar1 != piVar12) {
            iVar8 = *(int *)((int)this + 0xe4) - (int)(piVar1 + 1) >> 2;
            if (0 < iVar8) {
              _DstSize = iVar8 * 4;
              _memmove_s(piVar1,_DstSize,piVar1 + 1,_DstSize);
            }
            *(int *)((int)this + 0xe4) = *(int *)((int)this + 0xe4) + -4;
            environment = (void *)CONCAT31(environment._1_3_,1);
          }
          switch(attributeID_) {
          case 1:
            unaff_EBX = unaff_EBX + iStack_74;
            break;
          case 2:
            if (unaff_EBX < iStack_74) {
LAB_013969b6:
              unaff_EBX = iStack_74;
            }
            break;
          case 3:
            if (iStack_74 < unaff_EBX) goto LAB_013969b6;
            break;
          case 4:
            iVar8 = PlayElement_getId();
            if (0 < iVar8) goto LAB_013969b6;
            break;
          case 5:
            iVar8 = PlayElement_getId();
            if ((0 < iVar8) && (iStack_74 != 0)) goto LAB_013969b6;
          }
          if (cVar14 == '\0') goto LAB_013969c9;
        }
        environment = (void *)CONCAT31(environment._1_3_,1);
      }
LAB_013969c9:
      if (*(undefined4 **)(pbStack_48 + 8) <= puStack_44) {
        FUN_00d83c2d();
      }
      puStack_44 = puStack_44 + 1;
      env = pbStack_4;
      unaff_EBP = CONCAT13(cVar4,(int3)unaff_EBP);
    }
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    local_c = (void *)((uint)local_c & 0xffffff00);
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
  }
  if ((clampNonNegative_ == false) && (unaff_EBX < 0)) {
    unaff_EBX = 0;
  }
  *outModified = false;
  if (((char)environment != '\0') || (*(char *)((int)this + 0x9c) != '\0')) {
    if (pbStack_70 != (bool *)0x0) {
      environment = *(void **)(pbStack_70 + 8);
      pbStack_4 = pbStack_70;
      if (environment < *(void **)(pbStack_70 + 4)) {
        FUN_00d83c2d();
      }
      pbVar2 = pbStack_70;
      puVar11 = *(undefined4 **)(pbStack_70 + 4);
      if (*(undefined4 **)(pbStack_70 + 8) < puVar11) {
        FUN_00d83c2d();
      }
      pbStack_48 = pbVar2;
      while( true ) {
        puStack_44 = puVar11;
        if ((pbStack_48 == (bool *)0x0) || (pbStack_48 != pbStack_4)) {
          FUN_00d83c2d();
        }
        if (puVar11 == environment) break;
        if (pbStack_48 == (bool *)0x0) {
          FUN_00d83c2d();
        }
        if (*(undefined4 **)(pbStack_48 + 8) <= puVar11) {
          FUN_00d83c2d();
        }
        piVar12 = (int *)*puVar11;
        cVar4 = (**(code **)(*(int *)this + 0x230))(piVar12,env);
        if (cVar4 == '\0') {
          pvVar6 = EvaluationEnvironment_getOriginCard(env);
          set_play_element_id_field(env,this);
          (**(code **)(*piVar12 + 0x44))(env,&attributeID_,&clampNonNegative_);
          set_play_element_id_field(env,pvVar6);
          puVar11 = puStack_44;
          if (attributeID_ < 1) goto LAB_01396b29;
        }
        else {
LAB_01396b29:
          bVar3 = AttributeModifier_hasDynamicAttributeID(piVar12);
          if (bVar3) {
            bVar3 = Game_shouldLogAttributeModifierDebug(*(void **)((int)this + 0x30));
            if (bVar3) {
              FUN_01418e00();
              Game_logGeneral(*(void **)((int)this + 0x30),
                              "Attribute %d is being modified by card: %s",unaff_retaddr);
            }
            *outModified = true;
          }
        }
        if (*(undefined4 **)(pbStack_48 + 8) <= puVar11) {
          FUN_00d83c2d();
        }
        puVar11 = puVar11 + 1;
      }
    }
    FUN_012fa910();
    local_c._0_1_ = 3;
    FUN_01300680(2);
    iStack_4c = unaff_EBX;
    (**(code **)(*(int *)this + 0xa0))(unaff_retaddr,&pvStack_54,*outModified,0);
    local_c = (void *)((uint)local_c._1_3_ << 8);
    FUN_01300cd0();
  }
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return unaff_EBX;
}

