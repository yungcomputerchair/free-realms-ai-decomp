// addr: 0x01386420
// name: EvaluationEnvironment_serialize
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool EvaluationEnvironment_serialize(void * env, void * serializer) */

bool __thiscall EvaluationEnvironment_serialize(void *this,void *env,void *serializer)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *vector;
  uint auStack_44 [2];
  uint uStack_3c;
  undefined1 auStack_38 [4];
  void *pvStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  void *pvStack_24;
  undefined1 auStack_20 [4];
  uint *puStack_1c;
  uint *puStack_18;
  int iStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Serializes an EvaluationEnvironment including game/player ids, origin/target
                       ids, state, cost/effect command vectors, target card lists, precondition
                       value, depth, debug flags, and return values. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_01683280;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*(int *)this + 8))(env,DAT_01b839d8 ^ (uint)&stack0xffffffac);
  DebugStream_writeCString(env,"Starting EvaluationEnvironment\n");
  DebugStream_writeCString(env,"GameID: ");
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x7a2);
  }
  uVar5 = StateMachine_getCurrentState();
  Serializer_appendInteger(env,uVar5);
  DebugStream_writeCString(env,"OriginCardID: ");
  Serializer_appendInteger(env,*(uint *)((int)this + 8));
  DebugStream_writeCString(env,"TargetID: ");
  Serializer_appendInteger(env,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(env,"Target2ID: ");
  Serializer_appendInteger(env,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(env,"PlayerID: ");
  if (*(int *)((int)this + 0x14) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(env,uVar5);
  DebugStream_writeCString(env,"CurrentEvaluationState: ");
  Serializer_appendInteger(env,*(uint *)((int)this + 0x18));
  DebugStream_writeCString(env,"CostCommandObjects: ");
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x1c);
  DebugStream_writeCString(env,"EffectCommandObjects: ");
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x2c);
  DebugStream_writeCString(env,"Target1 Card List: ");
  puStack_1c = (uint *)0x0;
  puStack_18 = (uint *)0x0;
  iStack_14 = 0;
  puStack_8 = (undefined1 *)0x0;
  uVar5 = *(uint *)((int)this + 0x44);
  if (uVar5 < *(uint *)((int)this + 0x40)) {
    FUN_00d83c2d();
  }
  uStack_3c = *(uint *)((int)this + 0x40);
  if (*(uint *)((int)this + 0x44) < uStack_3c) {
    FUN_00d83c2d();
  }
  while( true ) {
    uVar1 = uStack_3c;
    if (this == (void *)0xffffffc4) {
      FUN_00d83c2d();
    }
    if (uVar1 == uVar5) break;
    if (this == (void *)0xffffffc4) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x44) <= uVar1) {
      FUN_00d83c2d();
    }
    auStack_44[0] = PlayElement_getId();
    puVar3 = puStack_18;
    if ((puStack_1c == (uint *)0x0) ||
       ((uint)(iStack_14 - (int)puStack_1c >> 2) <= (uint)((int)puStack_18 - (int)puStack_1c >> 2)))
    {
      if (puStack_18 < puStack_1c) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_38,auStack_20,puVar3,auStack_44);
    }
    else {
      *puStack_18 = auStack_44[0];
      puStack_18 = puStack_18 + 1;
    }
    if (*(uint *)((int)this + 0x44) <= uStack_3c) {
      FUN_00d83c2d();
    }
    uStack_3c = uStack_3c + 4;
  }
  STLVector_int_serialize(&stack0x00000000,(int)auStack_20);
  DebugStream_writeCString(env,"Target2 Card List: ");
  puStack_2c = (undefined4 *)0x0;
  puStack_28 = (undefined4 *)0x0;
  pvStack_24 = (void *)0x0;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  auStack_44[0] = *(uint *)((int)this + 0x54);
  if (auStack_44[0] < *(uint *)((int)this + 0x50)) {
    FUN_00d83c2d();
  }
  uVar5 = *(uint *)((int)this + 0x50);
  if (*(uint *)((int)this + 0x54) < uVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    uStack_3c = uVar5;
    uVar5 = uStack_3c;
    if (this == (void *)0xffffffb4) {
      FUN_00d83c2d();
    }
    if (uVar5 == auStack_44[0]) break;
    if (this == (void *)0xffffffb4) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x54) <= uVar5) {
      FUN_00d83c2d();
    }
    uVar6 = PlayElement_getId();
    puVar2 = puStack_28;
    if ((puStack_2c == (undefined4 *)0x0) ||
       ((uint)((int)pvStack_24 - (int)puStack_2c >> 2) <=
        (uint)((int)puStack_28 - (int)puStack_2c >> 2))) {
      if (puStack_28 < puStack_2c) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_38,&uStack_30,puVar2,&stack0xffffffb8);
    }
    else {
      *puStack_28 = uVar6;
      puStack_28 = puStack_28 + 1;
    }
    if (*(uint *)((int)this + 0x54) <= uStack_3c) {
      FUN_00d83c2d();
    }
    uVar5 = uStack_3c + 4;
  }
  STLVector_int_serialize(&stack0x00000000,(int)&uStack_30);
  DebugStream_writeCString(env,"PreconditionValue");
  vector = env;
  (**(code **)(*(int *)((int)this + 100) + 0x28))();
  DebugStream_writeCString(env,"Current Depth: ");
  Serializer_appendInteger(env,*(uint *)((int)this + 0x74));
  DebugStream_writeCString(env,"Debugging Enabled: ");
  Serializer_appendInteger(env,(uint)*(byte *)((int)this + 0x78));
  DebugStream_writeCString(env,"Count Tracing Enabled: ");
  Serializer_appendInteger(env,(uint)*(byte *)((int)this + 0x79));
  pvStack_4 = env;
  STLVector_intSerializable_serialize_013828b0(&pvStack_4,(void *)((int)this + 0x7c),(int)vector);
  DebugStream_writeCString(env,"Ending EvaluationEnvironment\n");
  uVar4 = (**(code **)(*(int *)this + 0xc))(env);
  uStack_10 = uStack_10 & 0xffffff00;
  if (pvStack_34 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_34);
  }
  pvStack_34 = (void *)0x0;
  uStack_30 = 0;
  puStack_2c = (undefined4 *)0x0;
  uStack_10 = 0xffffffff;
  if (pvStack_24 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_24);
  }
  ExceptionList = puStack_18;
  return (bool)uVar4;
}

