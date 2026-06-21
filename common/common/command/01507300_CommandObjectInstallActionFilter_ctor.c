// addr: 0x01507300
// name: CommandObjectInstallActionFilter_ctor
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectInstallActionFilter.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObjectInstallActionFilter_ctor(void * this, void *
   expressionValue, void * env) */

void * __thiscall CommandObjectInstallActionFilter_ctor(void *this,void *expressionValue,void *env)

{
  bool bVar1;
  uint ownerOrParent_;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs InstallActionFilter from an expression-tree ValueData, allocates a
                       ValidActionFilter, links it to the expression/environment, and applies an
                       environment-dependent flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5213;
  local_c = ExceptionList;
  ownerOrParent_ = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  local_4 = 0;
  *(undefined ***)this = CommandObject_InstallActionFilter::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_InstallActionFilter::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_InstallActionFilter",0x21);
  if (*(int *)((int)expressionValue + 4) != 5) {
    FUN_012f5a60("expressionValue->isExpressionTreeValue()",
                 "..\\common\\common\\command\\CommandObjectInstallActionFilter.cpp",0x1a);
  }
  if (*(int *)((int)expressionValue + 4) != 5) {
    FUN_012f5a60("mTypeID == kExpressionTreeTypeID",
                 "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                 ,0x117);
    if (*(int *)((int)expressionValue + 4) != 5) {
      uVar3 = 0;
      goto LAB_015073a2;
    }
  }
  uVar3 = *(undefined4 *)((int)expressionValue + 8);
LAB_015073a2:
  *(undefined4 *)((int)this + 0x128) = uVar3;
  pvVar2 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 100) = pvVar2;
  pvVar2 = Mem_Alloc(0x58);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ValidActionFilter_ctor(pvVar2);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(void **)((int)this + 0x124) = pvVar2;
  FUN_01340230(pvVar2,*(void **)((int)this + 0x30),ownerOrParent_);
  ValidActionFilter_setExpressionTree
            (*(void **)((int)this + 0x124),*(void **)((int)this + 0x128),*(int *)((int)this + 100));
  bVar1 = EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse();
  if (bVar1) {
    ValidActionFilter_setEnabled(*(void **)((int)this + 0x124),false);
  }
  ExceptionList = local_c;
  return this;
}

