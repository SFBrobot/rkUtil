#ifndef RKUTIL_FLOAT_DLOG
#define RKUTIL_FLOAT_DLOG

typedef union {
  float floatVal;
  int intVal;
} RawFloatConverter;

int convertFloat(float val) {
  RawFloatConverter converter;
  conv.floatVal = val;
  return conv.intVal;
}

void datalogAddFloat(int nDataSeries, float fDataValue) {
  datalogAddValue(nDataSeries, convertFloat(fDataValue));
}

#endif
