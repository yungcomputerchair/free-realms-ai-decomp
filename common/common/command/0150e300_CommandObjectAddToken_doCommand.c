// addr: 0x0150e300
// name: CommandObjectAddToken_doCommand
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectAddToken.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObjectAddToken_doCommand(void * this) */

bool __fastcall CommandObjectAddToken_doCommand(void *this)

{
  undefined1 uVar1;
  void *pvVar2;
  int *formatText;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes an AddToken command: validates mTarget as a Card/PlayElement, logs
                       token/property and current count, applies the increased token value, and
                       emits follow-up command/event data. Evidence:
                       'CommandObject_AddToken::doCommand' + CommandObjectAddToken.cpp asserts. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b6283;
  local_c = ExceptionList;
  pvVar2 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mTarget","..\\common\\common\\command\\CommandObjectAddToken.cpp",0x5c);
  }
  formatText = (int *)FUN_00d8d382(*(undefined4 *)((int)this + 0x68),0,
                                   &PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0)
  ;
  if (formatText != (int *)0x0) {
    pvVar7 = (void *)((int)this + 0x84);
    EvaluationEnvironment_logCardMessage
              (pvVar7,"CommandObject_AddToken::doCommand ",(char *)formatText,pvVar2);
    EvaluationEnvironment_tracefWithPrefix(pvVar7,"numTokens: ");
    FUN_01300d70(1);
    if (*(int *)((int)this + 0x138) == 0) {
      uVar3 = (**(code **)(*(int *)this + 0x74))(*(undefined4 *)((int)this + 0x130));
      *(undefined4 *)((int)this + 0x138) = uVar3;
    }
    EvaluationEnvironment_tracef
              (pvVar7,"TokenType: %d, property: %d",*(undefined4 *)((int)this + 0x138));
    iVar4 = (**(code **)(*formatText + 0x15c))(*(undefined4 *)((int)this + 0x130),pvVar7);
    if ((*(int *)((int)this + 0x128) == 2) ||
       (FUN_012f5a60("mTypeID == kIntegerTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x129), *(int *)((int)this + 0x128) == 2)) {
      iVar6 = *(int *)((int)this + 300);
    }
    else {
      iVar6 = 0;
    }
    EvaluationEnvironment_tracef(pvVar7,"Current Num Tokens: %d, + %d new Tokens",iVar4);
    FUN_012fa910();
    pvVar7 = (void *)0x0;
    local_c = (void *)0x0;
    FUN_01300680(2);
    uVar1 = (**(code **)(**(int **)((int)this + 0x68) + 0x10))
                      (*(undefined4 *)((int)this + 0x130),&stack0xffffffe0);
    pvVar2 = Mem_Alloc(0x14);
    if (pvVar2 != (void *)0x0) {
      pvVar7 = (void *)FUN_012f9eb0();
    }
    FUN_012f8c70(0x75);
    iVar5 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar7,iVar5);
    iVar5 = PlayElement_getId();
    DisplayActionBuilder_addIntArg(pvVar7,iVar5);
    DisplayActionBuilder_addIntArg(pvVar7,*(int *)((int)this + 0x138));
    DisplayActionBuilder_addIntArg(pvVar7,iVar6 + iVar4);
    (**(code **)(**(int **)((int)this + 0x30) + 0x154))(pvVar7);
    uStack_4 = 0xffffffff;
    FUN_01300cd0();
    ExceptionList = local_c;
    return (bool)uVar1;
  }
  ExceptionList = local_c;
  return false;
}

