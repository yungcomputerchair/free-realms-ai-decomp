// addr: 0x0149e880
// name: ActionNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_evaluate(void * this, void * returnValue, void * env) */

bool __thiscall ActionNode_evaluate(void *this,void *returnValue,void *env)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  undefined4 unaff_EDI;
  int unaff_retaddr;
  void *pvVar4;
  
                    /* Evaluates an action node by optionally forcing a mode, dispatching on the
                       stored action kind to the corresponding virtual handler, and writing a
                       boolean result. */
  EvaluationEnvironment_traceEnterf(env,"(ActionNode",unaff_EDI);
  if (*(char *)((int)this + 0x24) != '\0') {
    EvaluationEnvironment_tracef(env,"Setting Force!",unaff_EDI);
    EvaluationEnvironment_setForceReturn(*(undefined1 *)((int)this + 0x24));
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 < 1000) {
    if (iVar1 == 999) {
      pcVar3 = *(code **)(*(int *)this + 0xd0);
      goto LAB_0149ea44;
    }
    switch(iVar1) {
    case 1:
      pcVar3 = *(code **)(*(int *)this + 0x58);
      break;
    case 2:
      pcVar3 = *(code **)(*(int *)this + 0x5c);
      break;
    case 3:
      pcVar3 = *(code **)(*(int *)this + 0x60);
      break;
    case 4:
      pcVar3 = *(code **)(*(int *)this + 100);
      break;
    case 5:
      pcVar3 = *(code **)(*(int *)this + 0x68);
      break;
    case 6:
      pcVar3 = *(code **)(*(int *)this + 0x6c);
      break;
    case 7:
      pcVar3 = *(code **)(*(int *)this + 0x74);
      break;
    case 8:
      pcVar3 = *(code **)(*(int *)this + 0x78);
      break;
    case 9:
      pcVar3 = *(code **)(*(int *)this + 0x7c);
      break;
    case 10:
      pcVar3 = *(code **)(*(int *)this + 0x80);
      break;
    case 0xb:
      pcVar3 = *(code **)(*(int *)this + 0x88);
      break;
    case 0xc:
      pcVar3 = *(code **)(*(int *)this + 0x8c);
      break;
    case 0xd:
      pcVar3 = *(code **)(*(int *)this + 0x90);
      break;
    case 0xe:
      pcVar3 = *(code **)(*(int *)this + 0x70);
      break;
    case 0xf:
      pcVar3 = *(code **)(*(int *)this + 0x94);
      break;
    case 0x10:
      pcVar3 = *(code **)(*(int *)this + 0x98);
      break;
    case 0x11:
      pcVar3 = *(code **)(*(int *)this + 0xa0);
      break;
    case 0x12:
      pcVar3 = *(code **)(*(int *)this + 0xa4);
      break;
    case 0x13:
      pcVar3 = *(code **)(*(int *)this + 0xa8);
      break;
    case 0x14:
      pcVar3 = *(code **)(*(int *)this + 0xac);
      break;
    default:
      goto switchD_0149e8dd_caseD_15;
    case 0x16:
      pcVar3 = *(code **)(*(int *)this + 0xb0);
      break;
    case 0x1b:
      pcVar3 = *(code **)(*(int *)this + 0xc0);
      break;
    case 0x37:
      pcVar3 = *(code **)(*(int *)this + 0xc4);
      break;
    case 0x3a:
      pcVar3 = *(code **)(*(int *)this + 0xb4);
      break;
    case 0x3b:
      pcVar3 = *(code **)(*(int *)this + 0xb8);
      break;
    case 0x3e:
      pcVar3 = *(code **)(*(int *)this + 0xbc);
      break;
    case 0x41:
      pcVar3 = *(code **)(*(int *)this + 0x84);
      break;
    case 0x5e:
      pcVar3 = *(code **)(*(int *)this + 0x9c);
      break;
    case 0x5f:
      pcVar3 = *(code **)(*(int *)this + 0xcc);
    }
  }
  else {
    if (iVar1 == 1000) {
      pcVar3 = *(code **)(*(int *)this + 0xd4);
      goto LAB_0149ea44;
    }
switchD_0149e8dd_caseD_15:
    pcVar3 = *(code **)(*(int *)this + 200);
  }
LAB_0149ea44:
  pvVar4 = env;
  cVar2 = (*pcVar3)();
  if (cVar2 != '\0') {
    FUN_01300680(1);
    *(undefined1 *)(unaff_retaddr + 8) = 1;
    EvaluationEnvironment_traceExitf(env,") => true",pvVar4);
    return true;
  }
  FUN_01300680(1);
  *(undefined1 *)(unaff_retaddr + 8) = 0;
  EvaluationEnvironment_traceExitf(env,") => false",pvVar4);
  return false;
}

