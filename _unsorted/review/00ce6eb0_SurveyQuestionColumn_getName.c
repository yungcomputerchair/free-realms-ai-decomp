// addr: 0x00ce6eb0
// name: SurveyQuestionColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * SurveyQuestionColumn_getName(undefined4 param_1)

{
                    /* Returns field labels for a question/options row: Id, Name, Option Count, and
                       Options. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "Name";
  case 2:
    return "Option Count";
  case 3:
    return "Options";
  default:
    return "<error>";
  }
}

