// addr: 0x01506de0
// name: CommandObject_InstallActionMap_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_InstallActionMap_ctor(void * this, bool
   useAlternateTargets_, int actionMapId_, int actionMapAux_, int flags_, void * valueArg, void *
   baseArg) */

void * __thiscall
CommandObject_InstallActionMap_ctor
          (void *this,bool useAlternateTargets_,int actionMapId_,int actionMapAux_,int flags_,
          void *valueArg,void *baseArg)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CommandObject_InstallActionMap, installs its vtable/name string,
                       initializes inherited CommandObject state, and stores action-map operands at
                       offsets 0x130-0x13c. Evidence is the literal/vtable name
                       CommandObject_InstallActionMap and the call to CommandObject base ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5146;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CommandObject_ctor(this,baseArg);
  local_4 = 0;
  *(undefined ***)this = CommandObject_InstallActionMap::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_InstallActionMap::vftable;
  FUN_012fa910(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_InstallActionMap",0x1e);
  FUN_013010e0(valueArg);
  *(int *)((int)this + 0x130) = actionMapId_;
  *(int *)((int)this + 0x134) = actionMapAux_;
  pvVar2 = EvaluationEnvironment_getGame(baseArg);
  *(void **)((int)this + 0x30) = pvVar2;
  if (useAlternateTargets_) {
    pvVar2 = EvaluationEnvironment_getTargetCard(baseArg);
    if (pvVar2 != (void *)0x0) {
      pvVar2 = EvaluationEnvironment_getTargetCard(baseArg);
      *(void **)((int)this + 100) = pvVar2;
      pvVar2 = EvaluationEnvironment_getTargetCard(baseArg);
      goto LAB_01506eaa;
    }
  }
  pvVar2 = EvaluationEnvironment_getOriginCard(baseArg);
  *(void **)((int)this + 100) = pvVar2;
  pvVar2 = EvaluationEnvironment_getOriginCard(baseArg);
LAB_01506eaa:
  *(void **)((int)this + 0x13c) = pvVar2;
  *(int *)((int)this + 0x138) = flags_;
  ExceptionList = local_c;
  return this;
}

