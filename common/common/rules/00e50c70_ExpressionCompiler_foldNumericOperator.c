// addr: 0x00e50c70
// name: ExpressionCompiler_foldNumericOperator
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ExpressionCompiler_foldNumericOperator(int operatorId_) */

bool __cdecl ExpressionCompiler_foldNumericOperator(int operatorId_)

{
  double dVar1;
  double dVar2;
  int *in_EAX;
  int *unaff_ESI;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  
                    /* Attempts constant folding for numeric expression nodes, handling
                       add/subtract/multiply/divide/modulo/power/negate and rejecting invalid
                       division/modulo by zero. */
  if (*unaff_ESI != 5) {
    return false;
  }
  if (unaff_ESI[4] != -1) {
    return false;
  }
  if (unaff_ESI[5] != -1) {
    return false;
  }
  if (*in_EAX == 5) {
    if (in_EAX[4] != -1) {
      return false;
    }
    if (in_EAX[5] == -1) {
      dVar1 = *(double *)(unaff_ESI + 2);
      fVar3 = (float10)dVar1;
      dVar2 = *(double *)(in_EAX + 2);
      fVar4 = (float10)dVar2;
      switch(operatorId_) {
      case 0xc:
        fVar3 = fVar4 + fVar3;
        break;
      case 0xd:
        fVar3 = fVar3 - fVar4;
        break;
      case 0xe:
        fVar3 = fVar4 * fVar3;
        break;
      case 0xf:
        if ((float10)0 == fVar4) {
          return false;
        }
        fVar3 = fVar3 / fVar4;
        break;
      case 0x10:
        if ((float10)0 == fVar4) {
          return false;
        }
        dVar5 = CRT_floor((double)(fVar3 / fVar4));
        fVar3 = (float10)dVar1 - (float10)dVar5 * (float10)dVar2;
        break;
      case 0x11:
        fVar3 = (float10)FUN_00d84680();
        break;
      case 0x12:
        fVar3 = -fVar3;
        break;
      default:
        unaff_ESI[2] = 0;
        unaff_ESI[3] = 0;
        return true;
      case 0x14:
        return false;
      }
      *(double *)(unaff_ESI + 2) = (double)fVar3;
      return true;
    }
    return false;
  }
  return false;
}

