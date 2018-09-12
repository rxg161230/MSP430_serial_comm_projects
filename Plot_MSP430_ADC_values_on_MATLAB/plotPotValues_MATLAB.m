clc;
clear figure
close all 

fileID = fopen('Potentiometer Values');

formatSpec = '%f';

A = fscanf(fileID, formatSpec);

plot(A(2:3:end)*(1023/15),'LineWidth',2)
xlabel('TimeSeries Data')
ylabel('Potentiometer Reading (Scale:0-1023)')
hold on;
plot(A(1:3:end)*(1023/127),'LineWidth',2)
plot(A(3:3:end),'LineWidth',2)
legend('Number of Levels: 16','Number of Levels: 128','Number of Levels: 1024')



