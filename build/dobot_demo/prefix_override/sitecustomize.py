import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/robot/DOBOT_6Axis_ROS2_V4/install/dobot_demo'
